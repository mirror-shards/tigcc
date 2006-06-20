{
  TIGCC Documentation Tools

  Copyright (C) 2002-2004 Sebastian Reichelt

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2, or (at your option)
  any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software Foundation,
  Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA.
}

program EditHelpFile;

uses
	Forms,
	MainUnit in 'MainUnit.pas' {MainForm},
	Consts in '..\..\consts.pas';

{$R *.RES}

begin
	Application.Initialize;
	Application.Title := 'Help System Editor';
	Application.CreateForm(TMainForm, MainForm);
  Application.Run;
end.
