{
  This Delphi unit is part of TIGCC.

  Copyright (C) 2000-2004 Sebastian Reichelt

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

unit HandleWaitThreadUnit;

interface

uses
	SysUtils, Classes, Windows, Forms, Controls;

type
	THandleWaitThread = class(TThread)
	private
		FHasTerminated: Boolean;
		FWaitHandle: THandle;
	protected
		procedure Execute; override;
	public
		property WaitHandle: THandle read FWaitHandle;
		property HasTerminated: Boolean read FHasTerminated;
		constructor Create(WaitHandle: THandle);
	end;

implementation

{ THandleWaitThread }

constructor THandleWaitThread.Create(WaitHandle: THandle);
begin
	inherited Create (True);
	FHasTerminated := False;
	FreeOnTerminate := False;
	FWaitHandle := WaitHandle;
	Resume;
end;

procedure THandleWaitThread.Execute;
begin
	while (not Terminated) and (WaitForSingleObject (FWaitHandle, 1000) = Wait_TimeOut) do;
	FHasTerminated := True;
end;

end.
