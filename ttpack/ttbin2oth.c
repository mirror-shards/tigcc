/******************************************************************************
*
* project name:    TIGCC Tools Suite
* file name:       ttbin2oth.c
* initial date:    14/08/2000
* author:          thomas.nussbaumer@gmx.net
* description:     enwraps inputfile into a custom TI89 and TI92 variable
*
******************************************************************************/

/*
  This file is part of ttbin2oth.

  This file is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  As a special exception, UNMODIFIED copies of ttbin2oth may also be
  redistributed or sold without source code, for any purpose. (The Lesser
  General Public License restrictions do apply in other respects; for example,
  they cover modification of the launcher.) This exception notice must be
  removed on modified copies of this file.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef __TTBIN2OTH__
#define __TTBIN2OTH__

// if EMBEDDED_USE is defined, than we use this sourcefile from within another
// sourcefile

#ifndef EMBEDDED_USE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ttversion.h"
#include "revtools.h"
#include "tt.h"
#include "strhead.h"

#ifdef CVS_FILE_REVISION
#undef CVS_FILE_REVISION
#endif
//-----------------------------------------------------------------------------
// DON'T EDIT THE NEXT REVISION BY HAND! THIS IS DONE AUTOMATICALLY BY THE
// CVS SYSTEM !!!
//-----------------------------------------------------------------------------
#define CVS_FILE_REVISION "$Revision$"


//=============================================================================
// outputs usage information of this tool
//=============================================================================
void PrintUsage() {
#ifndef EMBEDDED_USE
    PRINT_ID("TTBin2OTH");
#endif
    fprintf(USAGE_OUT, "Usage: ttbin2oth [flags] <-89 | -92> <extension> <infile> <varname> [folder]\n\n" \
                       "       -quiet    ...  don't output standard messages\n"                           \
                       "       -strip    ...  MUST be set if the input is already a TI file\n"            \
                       "                      (generates a temporary file called bin2oth.tmp for\n"       \
                       "                      the stripped inputfile)\n"                                  \
                       "       -89       ...  generate a TI89 file\n"                                     \
                       "       -92       ...  generate a TI92p file\n\n"                                  \
                       "       extension ...  on-calc extension (up to 4 characters)\n"                   \
                       "       varname   ...  on-calc variable name (up to 8 characters)\n"               \
                       "       folder    ...  on-calc destination folder (OPTIONAL)\n\n"                  \
                       "       enwraps file into a custom TI89 or TI92p variable with given <extension>\n"\
                       "       NOTE1: the extension length may vary between 1 and 4 characters\n"         \
                       "       NOTE2: the output filename is generated by taking the given varname and\n" \
                       "              appending \".89y\" or \".9xy\" to it.\n"                            \
                       "       NOTE3: if a generated file CAN'T BE UPLOADED, you are probably using a\n"  \
                       "              reserved AMS name for your variable. Just try another name in\n"    \
                       "              this case.\n\n");
}

#endif

#include "bin2oth.c"

#ifndef EMBEDDED_USE
#define EMBEDDED_USE
#include "ttstrip.c"
#undef EMBEDDED_USE
#else
#include "ttstrip.c"
#endif

//=============================================================================
// ... just a stupid main ...
//=============================================================================
#ifndef EMBEDDED_USE
int main(int argc,char *argv[]) {
#else
int TTBin2OTH(int argc,char *argv[]) {
#endif
    char*          infile    = NULL;
    char*          folder    = NULL;
    char*          name      = NULL;
    char*          extension = NULL;
    int            calctype  = -1;
    int            strip     = 0;
    FILE*          ifp;
    FILE*          ofp;
    char           outfile[1024];
    unsigned char* buffer;
    int            length;
    unsigned char* outbuffer;
    unsigned int   outlength;
    int            n;
    char*          tmpfilename = "bin2oth.tmp";
    int            quiet = 0;

    // check for too less arguments
    if (argc < 4) {
#ifndef EMBEDDED_USE
        PrintUsage();
#endif
        return 1;
    }

    // parse arguments
    for (n=1; n<argc; n++) {
        if (!strcmp(argv[n], "-89"))         calctype  = CALC_TI89;
        else if (!strcmp(argv[n], "-92"))    calctype  = CALC_TI92P;
        else if (!strcmp(argv[n], "-strip")) strip     = 1;
        else if (!strcmp(argv[n], "-quiet")) quiet     = 1;
        else if (argv[n][0] == '-') {
            fprintf(stderr,"ERROR: invalid option %s",argv[n]);
            return 1;
        }
        else if (!extension) extension = argv[n];
        else if (!infile)    infile    = argv[n];
        else if (!name)      name      = argv[n];
        else if (!folder)    folder    = argv[n];
        else {
#ifndef EMBEDDED_USE
            PrintUsage();
#endif
            return 1;
        }
    }

    // check if all necessary arguments are supplied
    if (!infile || !name || calctype == -1 || !extension) {
#ifndef EMBEDDED_USE
        PrintUsage();
#endif
        return 1;
    }

    n = strlen(extension);
    if (n<1 || n>4) {
        fprintf(stderr,"ERROR: extension length must be between 1 and 4 characters\n");
        return 1;
    }

    if (strip) {
        char* params[4];
        params[0] = "";
        params[1] = "-quiet";
        params[2] = infile;
        params[3] = tmpfilename;
        if (TTStrip(4,params)) {
            fprintf(stderr,"ERROR: stripping inputfile %s failed\n",infile);
            return 1;
        }
        infile = tmpfilename;
    }

#ifndef EMBEDDED_USE
    if (!quiet) PRINT_ID("TTBin2OTH");
#endif


    if (!(ifp = fopen(infile,"rb"))) {
        fprintf(stderr,"ERROR: cannot open inputfile %s\n",infile);
        if (strip) remove(tmpfilename);
        return 1;
    }

    if (calctype == CALC_TI89) sprintf(outfile,"%s.89y",name);
    else                       sprintf(outfile,"%s.9xy",name);

    if (!(ofp = fopen(outfile,"wb"))) {
        fprintf(stderr,"ERROR: cannot open outputfile %s\n",outfile);
        fclose(ifp);
        if (strip) remove(tmpfilename);
        return 1;
    }

    // read infile into buffer
    fseek(ifp,0,SEEK_END);
    length = ftell(ifp);
    buffer = (unsigned char*)malloc(length);
    if (!buffer) {
        fprintf(stderr,"ERROR: cannot allocate memory (%d bytes)\n",length);
        fclose(ifp);
        fclose(ofp);
        if (strip) remove(tmpfilename);
        return 1;
    }
    rewind(ifp);
    fread(buffer,1,length,ifp);
    fclose(ifp);

    outbuffer = DataBuffer2OTHBuffer(calctype,folder,name,extension,length,buffer,&outlength);

    n = 0;

    if (!outbuffer) {
        n = 1;
    }
    else {
        if (fwrite(outbuffer,outlength,1,ofp) != 1) {
            fprintf(stderr,"ERROR: cannot write %u bytes to outputfile to %s\n",outlength,outfile);
            n = 1;
        }
        else {
            if (!quiet) fprintf(stdout,"%u bytes written to %s\n",outlength,outfile);
        }
        free(outbuffer);
    }

    free(buffer);
    fclose(ofp);

    if (strip) remove(tmpfilename);
    return n;
}

#endif

//#############################################################################
//###################### NO MORE FAKES BEYOND THIS LINE #######################
//#############################################################################
//
//=============================================================================
// Revision History
//=============================================================================
//
// Revision 1.10  2002/05/07 16:33:46  tnussb
// generic commit
//
// Revision 1.9  2002/05/07 15:58:46  tnussb
// usage text modified (NOTE3 added)
//
// Revision 1.8  2002/03/14 09:01:44  tnussb
// (1) supports now between 1 and 4 characters as extension
// (2) new flag "-quiet" added (suppress standard messages)
// (3) new flag "-strip" added (strip TI header before OTH generation)
//     With this new flag it is possible to convert any TI file in
//     one step into an OTH file without the need of using TTStrip
//     before.
// (4) Usage text completely rewritten
//
// Revision 1.7  2002/03/04 14:32:41  tnussb
// now tool can be used as embedded version from within other tools
// by defining EMBEDDED_VERSION before including the sourcefile
//
// Revision 1.6  2002/02/07 09:49:36  tnussb
// all local includes changed, because header files are now located in pctools folder
//
// Revision 1.5  2000/11/28 00:41:15  Thomas Nussbaumer
// unnecessary local function PrintId() removed
//
// Revision 1.4  2000/11/28 00:04:21  Thomas Nussbaumer
// using now USAGE_OUT stream for usage info
//
// Revision 1.3  2000/08/23 19:40:44  Thomas Nussbaumer
// using now automatic version display (revtools.h)
//
// Revision 1.2  2000/08/23 01:13:35  Thomas Nussbaumer
// wrapper function exported to own file bin2oth.c
//
// Revision 1.1  2000/08/14 21:43:16  Thomas Nussbaumer
// initial version
//
//
//
//
