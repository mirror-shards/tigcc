#ifndef __ERROR
#define __ERROR

#include <default.h>

#define __CONST_INT_TO_ERR_LABEL(x) _ER_CODE_##x
#define _ER_throw(err_no) ({extern void __CONST_INT_TO_ERR_LABEL(err_no);goto*(&(__CONST_INT_TO_ERR_LABEL(err_no)));})

/* Begin Auto-Generated Part */
#ifndef __HAVE_Bool
#define __HAVE_Bool
enum Bool{FALSE,TRUE};
#endif
typedef struct ErrorFrameStruct{unsigned long A2,A3,A4,A5,A6,A7;unsigned long D3,D4,D5,D6,D7;unsigned long NG_control;char*RetIndex;unsigned long PC;struct ErrorFrameStruct*Link;}ERROR_FRAME[1];
#define ER_OK 0
#define ER_OKAY 0
#define ER_EXIT 1
#define ER_STOP 2
#define ER_OFF 3
#define ER_PRGM_STOP 4
#define ER_NO_MSG 9
#define ER_FUNC_DID_NOT_RETURN_VALUE 10
#define ER_TEST_NOT_TRUE_OR_FALSE 20
#define ER_ARG_CANNOT_BE_FOLDER 30
#define ER_ARGUMENT 40
#define ER_ARG_MISMATCH 50
#define ER_EXPECTED_BOOL_OR_AGG 60
#define ER_ARG_MUST_BE_DECIMAL 70
#define ER_ARG_MUST_BE_LABEL 80
#define ER_ARGUMENT_MUST_BE_LIST 90
#define ER_ARG_MUST_BE_MATRIX 100
#define ER_ARG_MUST_BE_PIC 110
#define ER_ARG_MUST_BE_PIC_OR_STR 120
#define ER_ARG_MUST_BE_STRING 130
#define ER_EXPECTED_VAR 140
#define ER_ARG_MUST_BE_EMPTY_FOLDER 150
#define ER_EXPECTED_ALGEBRAIC 160
#define ER_ASAP_TOO_LONG 161
#define ER_ATTRIBUTE_NOT_FOUND 163
#define ER_BATT_LOW 165
#define ER_BOUND 170
#define ER_BREAK 180
#define ER_CHECKSUM 185
#define ER_CIRCULAR_DEFINITION 190
#define ER_INVALID_SUCH_THAT 200
#define ER_DATATYPE 210
#define ER_DEPENDENT_LIMIT 220
#define ER_DIFF_EQ_SETUP 225
#define ER_DIMENSION 230
#define ER_NOT_ENOUGH_ELEMENTS 230
#define ER_NON_CONFORMING_LISTS 240
#define ER_DIVBY0 250
#define ER_DOMAIN 260
#define ER_DUPLICATE_VAR_NAME 270
#define ER_ELSEIF_WITHOUT_IF 280
#define ER_ELSE_WITHOUT_IF 280
#define ER_ENDTRY_WITHOUT_ELSE 290
#define ER_EXCESSIVE_ITERATION 295
#define ER_EXPECTED_2OR3_ELEMENTS 300
#define ER_EXPIRED 305
#define ER_APP_EXT_NOT_FOUND 307
#define ER_APP_NOT_FOUND 308
#define ER_INVALID_NSOLVE_ARG1 310
#define ER_INVALID_SOLVE_ARG1 320
#define ER_FOLDER 330
#define ER_FUNCS_IN_DIFF_EQ 335
#define ER_INCONSISTENT_UNITS 345
#define ER_INVALID_SUBSCRIPT 350
#define ER_INVALID_INDIR_STRING 360
#define ER_INDIR_STRING_NOT_VARNAME 360
#define ER_INDIR_STRING_NOT_FUNNAME 360
#define ER_INVALID_ANS 380
#define ER_ILLEGAL_ASSIGNMENT 390
#define ER_ILLEGAL_ASSIGNMENT_VALUE 400
#define ER_INVALID_AXES 405
#define ER_ILLEGAL_COMMAND 410
#define ER_INVALID_FOLDER_NAME 420
#define ER_GRAPH_MODE 430
#define ER_INVALID_GUESS 435
#define ER_INVALID_IMPLIED_MULT 440
#define ER_ILLEGAL_IN_FUNC 450
#define ER_ILLEGAL_IN_CUSTOM 460
#define ER_ILLEGAL_IN_DIALOG 470
#define ER_ILLEGAL_IN_TOOLBAR 480
#define ER_CANNOT_EXIT_FROM_TRY 490
#define ER_CANNOT_CYCLE_FROM_TRY 490
#define ER_CANNOT_GOTO_FROM_TRY 490
#define ER_CANNOT_GOTO_INTO_TRY 490
#define ER_INVALID_LABEL 500
#define ER_INVALID_LIST_OR_MATRIX 510
#define ER_INVAL_OUTSIDE_TB_CM 520
#define ER_INVAL_OUTSIDE_DG_TB_CM 530
#define ER_INVALID_OUTSIDE_DIALOG 540
#define ER_MUST_BE_IN_PRGM_OR_FUNC 550
#define ER_CYCLE_NOT_IN_LOOP 560
#define ER_EXIT_NOT_IN_LOOP 560
#define ER_INVALID_PATHNAME 570
#define ER_INVALID_POLAR_COMPLEX 575
#define ER_ILLEGAL_PRGM_REF 580
#define ER_INVALID_SYNTAX_BLOCK 590
#define ER_INVALID_TABLE 600
#define ER_INVALID_USE_OF_UNITS 605
#define ER_INVALID_LOCAL_DECLARATION 610
#define ER_EXPECTED_VAR_OR_FUNC 620
#define ER_INVALID_VAR_REF 630
#define ER_INVALID_VECTOR_SYNTAX 640
#define ER_LINK_IO 650
#define ER_MAT_NOT_DIAGONALIZABLE 665
#define ER_MEMORY 670
#define ER_MEMORY_EXHAUSTION 670
#define ER_ESTACK_OVERFLOW 670
#define ER_STACK_VIO 673
#define ER_EXPECTED_LPAR 680
#define ER_EXPECTED_RPAR 690
#define ER_EXPECTED_DOUBLE_QUOTE 700
#define ER_EXPECTED_RIGHT_BRACKET 710
#define ER_EXPECTED_RIGHT_BRACE 720
#define ER_INVALID_BLOCK_STRUCTURE 730
#define ER_MISSING_THEN 740
#define ER_NOT_FUNC_OR_PRGM 750
#define ER_NO_FUNCS_SEL 765
#define ER_NO_SOLUTION 780
#define ER_NON_ALGEBRAIC_VARIABLE 790
#define ER_UNREAL_RESULT 800
#define ER_EXPECTED_REAL 800
#define ER_MEMORY_DML 810
#define ER_RATIONAL_NUMERIC_OVERFLOW 830
#define ER_OVERFLOW 830
#define ER_STAT_PLOT 840
#define ER_PRGM_NOT_FOUND 850
#define ER_RECURSION_TOO_DEEP 860
#define ER_RESERVED 870
#define ER_SYS_FUNC 870
#define ER_ROM_ROUTINE_NOT_AVAILABLE 875
#define ER_SEQUENCE_SETUP 880
#define ER_SIGNATURE_ERR 885
#define ER_SINGULARMAT 890
#define ER_SLOPE_FIELD_FUNCS 895
#define ER_WEIGHTS_SUM_NOT_POS 900
#define ER_LISTS_CONTAIN_NEG 900
#define ER_LISTS_NOT2DISCREET 900
#define ER_EMPTY_GROUP_NOT_VALID 900
#define ER_SYNTAX 910
#define ER_UNEXPECTED_CHARACTER 910
#define ER_EXPECTED_EQUAL 910
#define ER_EXPECTED_FACTOR 910
#define ER_TOO_FEW_ARGS 930
#define ER_TOO_MANY_ARGS 940
#define ER_TOO_MANY_SUBSCRIPTS 950
#define ER_TOO_MANY_UNDEFINED 955
#define ER_UNDEFINED_VAR 960
#define ER_UNLICENSED 965
#define ER_GRAPH_FUNC_IN_USE 970
#define ER_PROG_OR_FUNC_IN_USE 970
#define ER_VAR_IN_USE 970
#define ER_LOCKED 980
#define ER_PROTECTED 980
#define ER_NAME_TOO_LONG 990
#define ER_RANGE 1000
#define ER_ZOOM 1010
#define ER_ILLEGAL_TAG 1020
#define ER_UNKNOWN_TAG 1020
#define ER_DIVISION_BUG 1020
#define ER_MEM_VIO 1030
#define ER_FP_TEST_FAIL 4094
#define EXPECTED_BOOL_OR_AGG_ERROR 60
#define EXPECTED_VAR_ERROR 140
#define EXPECTED_ALGEBRAIC_ERROR 160
#define INVALID_SUCH_THAT_ERROR 200
#define NON_CONFORMING_LISTS_ERROR 240
#define EXPECTED_2OR3_ELEMENTS_ERROR 300
#define INVALID_NSOLVE_ARG1_ERROR 310
#define INVALID_SOLVE_ARG1_ERROR 320
#define INVALID_PATHNAME_ERROR 570
#define EXPECTED_VAR_OR_FUNC_ERROR 620
#define MEMORY_EXHAUSTION_ERROR 670
#define ESTACK_OVERFLOW_ERROR 670
#define EXPECTED_LPAR_ERROR 680
#define EXPECTED_RPAR_ERROR 690
#define EXPECTED_DOUBLE_QUOTE_ERROR 700
#define EXPECTED_RIGHT_BRACKET_ERROR 710
#define EXPECTED_RIGHT_BRACE_ERROR 720
#define UNREAL_RESULT_ERROR 800
#define EXPECTED_REAL_ERROR 800
#define RATIONAL_NUMERIC_OVERFLOW_ERROR 830
#define RECURSION_TOO_DEEP_ERROR 860
#define SYNTAX_ERROR 910
#define UNEXPECTED_CHARACTER_ERROR 910
#define EXPECTED_EQUAL_ERROR 910
#define EXPECTED_FACTOR_ERROR 910
#define TOO_FEW_ARGS_ERROR 930
#define TOO_MANY_ARGS_ERROR 940
#define TOO_MANY_SUBSCRIPTS_ERROR 950
#define TOO_MANY_UNDEFINED_ERROR 955
#define GRAPH_FUNC_IN_USE_ERROR 970
#define NAME_TOO_LONG_ERROR 990
#define ILLEGAL_TAG_ERROR 1020
#define UNKNOWN_TAG_ERROR 1020
#define DIVISION_BUG_ERROR 1020
#define ER_catch _rom_call(short,(void*),154)
#define ER_success _rom_call(void,(void),155)
#define ER_throw(err_no) _ER_throw(err_no)
#define ER_throwVar _rom_call_attr(void,(short),__attribute__((__noreturn__)),153)
#define ERD_dialog ({__need_in_use_bit;_rom_call(short,(short,short),151);})
#define ERD_process ({__need_in_use_bit;_rom_call(void,(short),152);})
#define ENDFINAL }if(errCode)PASS;}
#define ENDTRY ;_ONERR_=0;}}
#define FINALLY ER_success();}{
#define ONERR ER_success();}else{register short _ONERR_=1;
#define PASS (ER_throwVar(errCode))
#define TRY {ERROR_FRAME __errFrame;unsigned short errCode;errCode=ER_catch(__errFrame);if(!errCode){
#if MIN_AMS>=101
#define find_error_message _rom_call(const char*,(short),2C1)
#endif
/* End Auto-Generated Part */

#define ER_THROW(n) ER_throw(n)

#endif
