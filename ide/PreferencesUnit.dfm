�
 TPREFERENCESFORM 0�  TPF0TPreferencesFormPreferencesFormLeft� Top=ActiveControlOKButtonBorderIconsbiSystemMenu BorderStylebsDialogCaptionPreferencesClientHeightAClientWidthAColor	clBtnFaceFont.CharsetDEFAULT_CHARSET
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style OldCreateOrderPositionpoScreenCenterOnCreate
FormCreate	OnDestroyFormDestroyOnShowFormShowPixelsPerInch`
TextHeight TButtonOKButtonLeft� Top WidthQHeightAnchorsakRightakBottom Caption&OKDefault	ModalResultTabOrder   TButtonCancelButtonLeft� Top WidthQHeightAnchorsakRightakBottom Cancel	Caption&CancelModalResultTabOrder  TPageControlPageControllerLeftTopWidth1Height
ActivePageGeneralSheetAnchorsakLeftakTopakRightakBottom TabOrderOnChangePageControllerChange 	TTabSheetGeneralSheetCaptionGeneral 	TCheckBoxStopCompilationBoxLeftTopWidth� HeightCaption+&Stop compilation at first file with errorsTabOrder   	TCheckBoxFlatButtonsCheckBoxLeftTop� WidthIHeightCaption&Flat buttonsChecked	State	cbCheckedTabOrder
  	TCheckBoxMenuBitmapsCheckBoxLeftTop� WidthYHeightCaption&Menu bitmapsChecked	State	cbCheckedTabOrder  	TCheckBoxAutoSaveCheckBoxLeftTop� WidthiHeightCaption&Auto-save projectChecked	State	cbCheckedTabOrder  	TCheckBoxOpenFolderBoxLeftTop6Width� HeightCaption.&Display messsage after successful compilationChecked	State	cbCheckedTabOrder  	TCheckBoxDeleteObjectFilesBoxLeftTopXWidth� HeightCaption-Delete &object files after successful linkingTabOrder  	TCheckBoxDeleteErrorsCheckBoxLeftTop� Width� HeightCaptionDelete &overwritten errorsChecked	State	cbCheckedTabOrder	  	TCheckBoxSplitFilesCheckBoxLeftTopiWidth� HeightCaption3Split C source files for &error position extractionChecked	State	cbCheckedTabOrder  	TCheckBoxDeleteAssemblyFilesBoxLeftTopGWidth� HeightCaption/Delete assembly files after successful &linkingChecked	State	cbCheckedTabOrder  	TCheckBoxAllowImplicitCheckBoxLeftTopzWidth� HeightCaption(Allow &implicit declaration of functionsTabOrder  	TCheckBoxAutoNewsCheckBoxLeftTop� Width� HeightCaptionDownload &headlines on startupTabOrder  	TCheckBoxJumpToErrorBoxLeftTop%Width� HeightCaption"Automatically &jump to first errorChecked	State	cbCheckedTabOrder   	TTabSheetTransferSheetCaptionTransfer
ImageIndex 	TGroupBox	TargetBoxLeftTopWidth	Height� AnchorsakLeftakTopakRight Caption&TargetTabOrder  TRadioButtonVTIBoxLeftTop&WidthAHeightCaption&Virtual TIChecked	TabOrderTabStop	OnClickTargetBoxClick  TRadioButtonRealCalcBoxLeftTopRWidthaHeightCaption&Real CalculatorTabOrderOnClickTargetBoxClick  	TGroupBoxPortBoxLeft#TopeWidthNHeight]Caption
&Link PortEnabledTabOrder TRadioButtonPortCOM1BoxLeft
TopWidth1HeightCaptionCOM&1EnabledTabOrder   TRadioButtonPortCOM2BoxLeft
Top$Width1HeightCaptionCOM&2EnabledTabOrder  TRadioButtonPortCOM3BoxLeft
Top4Width1HeightCaptionCOM&3EnabledTabOrder  TRadioButtonPortCOM4BoxLeft
TopDWidth1HeightCaptionCOM&4EnabledTabOrder   	TGroupBoxCableBoxLeft{TopeWidth~Height]Caption&Cable TypeEnabledTabOrder TRadioButtonCableBlackBoxLeft
TopWidthgHeightCaption&Black Link CableEnabledTabOrder   TRadioButtonCableGrayBoxLeft
Top4WidthgHeightCaption&Gray Link CableEnabledTabOrder   TRadioButtonNoneBoxLeftTopWidth1HeightCaption&NoneTabOrder OnClickTargetBoxClick  TEditVTIPathEditLeft#Top8Width� HeightAnchorsakLeftakTopakRight TabOrder  TButtonVTIPathBrowseButtonLeft� Top8Width5HeightAnchorsakTopakRight Caption
&Browse...TabOrderOnClickVTIPathBrowseButtonClick    	TTabSheetEditorSheetCaptionEditor
ImageIndex TLabelLabel2LeftTopWidth7HeightCaptionC &Tab Size:FocusControlCTabSizeEdit  TLabelLabel3LeftTopaWidth6HeightCaptionEditor Font:  TLabelLabel4LeftxTopWidthGHeightCaption&ASM Tab Size:FocusControlASMTabSizeEdit  TEditCTabSizeEditLeftLTopWidthHeightTabOrder Text2  	TCheckBoxColorCheckBoxLeftTop-Width� HeightCaption&Specify background colorTabOrderOnClickColorCheckBoxClick  TButtonChangeColorButtonLeftTopAWidthNHeightCaption	Change...EnabledTabOrderOnClickChangeColorButtonClick  TButtonChangeFontButtonLeftTop� WidthQHeightCaption	Change...TabOrderOnClickChangeFontButtonClick  TPanel	FontLabelLeftTopoWidth	HeightAnchorsakLeftakTopakRight 
BevelOuterbvNoneBorderStylebsSingleCaptionFixedSysColorclWindowFont.CharsetDEFAULT_CHARSET
Font.ColorclWindowTextFont.Height�	Font.NameFixedsys
Font.Style 
ParentFontTabOrder  TEditASMTabSizeEditLeft� TopWidthHeightTabOrderText8  	TCheckBoxOnFlyCheckBoxLeftTop� Width� HeightCaptionOn-the-&fly syntax highlightingTabOrder  	TCheckBoxAutoBlockCheckBoxLeftTop� Width� HeightCaption&Automatic '{...}' blocks in CChecked	State	cbCheckedTabOrder  	TCheckBoxDragDropEditCheckBoxLeftTop� WidthyHeightCaption&Drag and drop editingChecked	State	cbCheckedTabOrder  	TCheckBoxRemoveTrailingSpcCheckBoxLeftTop� Width� HeightCaption"&Remove trailing spaces from linesTabOrder	   	TTabSheetSyntaxHighlightingSheetCaptionSyntax Highlighting
ImageIndex TLabelLabel5LeftTopWidth8HeightCaption&Settings for:FocusControlLanguageSelectionBox  	TComboBoxLanguageSelectionBoxLeftTop WidthqHeightStylecsDropDownList
ItemHeightItems.StringsC FilesGNU ASM Files TabOrder OnChangeLanguageSelectionBoxChange  	TCheckBoxSyntaxEnabledBoxLeft� Top"WidthAHeightCaption&EnabledChecked	State	cbCheckedTabOrderOnClickSyntaxEnabledBoxClick  TButtonButton1LeftTop@Width}HeightCaptionNumber Color...TabOrderOnClickButton1Click  TButtonButton2Left� Top@Width}HeightCaptionNumber Style...TabOrderOnClickButton2Click  TButtonButton3LeftTop`Width}HeightCaptionSymbol Color...TabOrderOnClickButton3Click  TButtonButton4Left� Top`Width}HeightCaptionSymbol Style...TabOrderOnClickButton4Click  TButtonButton5LeftTop� Width}HeightCaptionParenthesis Colors...TabOrderOnClickButton5Click  TButtonButton6Left� Top� Width}HeightCaptionParenthesis Style...TabOrderOnClickButton6Click  	TTreeView
ObjectTreeLeftTop� Width� HeightEIndent
Items.Data
~      %           ��������       Highlighting&           ��������        Custom Styles#           ��������        
Word ListsRightClickSelect	ShowRootTabOrderOnChangeObjectTreeChange
OnDblClickEditItemOnEditedObjectTreeEdited	OnEditingObjectTreeEditing	OnKeyDownObjectTreeKeyDown  TButtonButton7Left� Top� WidthAHeightCaption
&New StyleTabOrder	OnClickButton7Click  TButtonButton8Left� Top� WidthAHeightCaption	New &ListTabOrder
OnClickButton8Click  TButtonButton9Left� Top� WidthAHeightCaption&Edit...TabOrderOnClickEditItem  TButtonResetButtonLeft� Top WidthAHeightCaption&ResetTabOrderOnClickResetButtonClick    TColorDialogColorDlgCtl3D	Options
cdAnyColor Left�   TFontDialogFontDlgFont.CharsetDEFAULT_CHARSET
Font.ColorclWindowTextFont.Height�	Font.NameMS Sans Serif
Font.Style MinFontSize MaxFontSize Options
fdAnsiOnly	fdEffectsfdFixedPitchOnly Left   TTimerOKTimerEnabledIntervaldOnTimerOKTimerTimerLeft�   TOpenDialog	BrowseDlgFilter*Programs (*.exe)|*.exe|All Files (*.*)|*.*OptionsofHideReadOnlyofPathMustExistofFileMustExist TitleBrowseLeft    