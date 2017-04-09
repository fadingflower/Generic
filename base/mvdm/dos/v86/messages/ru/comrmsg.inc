;***    Translateable text for command.com resident data.


;*      Input characters for critical error "Abort, Retry, Fail, Ignore?"
;       and Yes/No.

Abort_Char      db      "A"
Retry_Char      db      "R"
Ignore_Char     db      "I"
Fail_Char       db      "F"
Yes_Char        db      "Y"
No_Char         db      "N"


;*      MESSAGES
;
;       See resmsg.equ for macro definition.


;*      Local messages.

	msg     Req_Abort, <"Abort (�⮯)">
	msg     Req_Retry, <", Retry (�����)">
	msg     Req_Ignore,<", Ignore (�ய��)">
	msg     Req_Fail,  <", Fail (���)">
	msg     Req_End,   <"?">
	msg     MRead,     <"�⥭��",0>
	msg     MWrite,    <"������",0>
	msg     BlkDevErr, <" %1 ��� %2",CR,LF>
	msg     CharDevErr,<" %1 ���ன�⢮ %2",CR,LF>
	msg     NeedVolMsg,<"��⠢�� ⮬ %1, �਩�� ����� %2-%3",CR,LF>
	msg     BadFatMsg, <"�ᯮ�祭� ⠡��� ࠧ��饭�� 䠩��� (FAT) �� ��᪥ %1",CR,LF>
	msg     ComBad,    <"���ࠢ���� COMMAND.COM",CR,LF>
	msg     PutBackMsg,<"��⠢�� ��� � %1 � ��᪮��� %2",CR,LF>
	msg     Prompt,    <"������ ���� �������...",CR,LF>
	msg     EndBatMes, <CR,LF,"�४���� �믮������ ����⭮�� ������� [Y(��)/N(���)]?">
	msg     ExecEMes,  <"�� 㤠���� �믮����� %1",CR,LF>
	msg     ExeBad,    <"�訡�� � EXE-䠩��",CR,LF>
	msg     TooBig,    <"�ணࠬ�� �� 㬥頥��� � �����",CR,LF>
	msg     NoHandMes, <CR,LF,"��� ᢮������ ���ਯ�஢ 䠩���">
	msg     RBadNam,   <"���ࠢ��쭠� ������� ��� ��� 䠩��",CR,LF>
	msg     AccDen,    <"��� ����㯠 ">
	msg     BMemMes,   <CR,LF,"�訡�� �� �뤥����� �����">
	msg     HaltMes,   <CR,LF,"�� 㤠���� ����㧨�� COMMAND.COM, ��⥬� ��⠭������",CR,LF>
	msg     FRetMes,   <CR,LF,"�� 㤠���� �������� COMMAND.COM, �����襭�� ࠡ���",CR,LF>
	msg     Patricide, <CR,LF,"��ࢠ� ����� ���孥�� �஢��, �த������� ����������",CR,LF> 
	msg     Newlin,    <CR,LF>

;*      Ptrs to message lists.
;       Segment portion is 1, signalling message services to call retriever.

MsgPtrLists     label   dword
	dw      DATARES:ExtMsgPtrs,1    ; extended error messages
	dw      DATARES:ParsMsgPtrs,1   ; parse error messages
	dw      DATARES:ExtMsgPtrs,1    ; critical error messages -
					;  use extended error list
	dw      0,0                     ; file system error messages - none
	dw      DATARES:MsgRetrv_Trap           ; address of message retriever
MySeg3  dw      ?                       ;  (segment filled in during init)



;*      Critical error messages.

	msg     ExtErr19,<"�訡�� ����� �� �����">
	msg     ExtErr20,<"���ࠢ��쭮� ���ன�⢮">
	msg     ExtErr21,<"��� ��⮢����">
	msg     ExtErr22,<"���ࠢ���� ����� � ���ன���">
	msg     ExtErr23,<"�訡�� � ������">
	msg     ExtErr24,<"���ࠢ���� ��㬥��� ����� � ���ன���">
	msg     ExtErr25,<"�訡�� ���᪠">
	msg     ExtErr26,<"���ࠢ���� ⨯ ���⥫�">
	msg     ExtErr27,<"����� �� ������">
	msg     ExtErr28,<"� �ਭ�� ��� �㬠��">
	msg     ExtErr29,<"�訡�� �� �����">
	msg     ExtErr30,<"�訡�� �� �⥭��">
	msg     ExtErr31,<"��騩 ᡮ� ��⥬�">
	msg     ExtErr32,<"����襭�� ०��� ᮢ���⭮�� ����㯠">
	msg     ExtErr33,<"����襭�� �����஢��">
	msg     ExtErr34,<"���ࠢ��쭠� ᬥ�� ��᪠">
	msg     ExtErr35,<"������㯥� FCB (���� �ࠢ����� 䠩���)">
	msg     ExtErr36,<"������� ��⥬� ���௠��">
	msg     ExtErr37,<"��ᮮ⢥��⢨� ������� ��࠭��">
	msg     ExtErr38,<"�������筮 ��������� ������">
	msg     ExtErr39,<"�������筮 ���� �� ��᪥">

;       List of ptrs to critical error messages.
;       Code assumes extended error number order, beginning
;       with extended error number 19.

CritMsgPtrs     label   word
	dw      DATARES:ExtErr19,DATARES:ExtErr20,DATARES:ExtErr21,DATARES:ExtErr22,DATARES:ExtErr23,DATARES:ExtErr24
	dw      DATARES:ExtErr25,DATARES:ExtErr26,DATARES:ExtErr27,DATARES:ExtErr28,DATARES:ExtErr29,DATARES:ExtErr30
	dw      DATARES:ExtErr31,DATARES:ExtErr32,DATARES:ExtErr33,DATARES:ExtErr34,DATARES:ExtErr35,DATARES:ExtErr36
	dw      DATARES:ExtErr37,DATARES:ExtErr38,DATARES:ExtErr39

DataResEnd      label   byte    ; end of resident portion if /msg not used



;*      Parse error messages.

	msg     ParsErr01,<"���誮� ����� ��ࠬ��஢">
	msg     ParsErr02,<"��������� ��易⥫�� ��ࠬ���">
	msg     ParsErr03,<"���ࠢ���� ��ࠬ���">
	msg     ParsErr04,<"���ࠢ��쭮� ���祢�� ᫮��">
	msg     ParsErr05,<" ">
	msg     ParsErr06,<"���祭�� ��ࠬ��� ��室�� �� �।��� �����⨬��� ���������">
	msg     ParsErr07,<"�������⨬�� ���祭�� ��ࠬ���">
	msg     ParsErr08,<"�������⨬�� ���祭�� ��ࠬ���">
	msg     ParsErr09,<"���ࠢ���� �ଠ� ��ࠬ���">
	msg     ParsErr10,<"���ࠢ���� ��ࠬ���">
	msg     ParsErr11,<"���ࠢ��쭮� ��⠭�� ��ࠬ��஢">

;       List of ptrs to parse error messages.
;       In order, beginning with parse error number 1.

ParsMsgPtrs     label   word
	dw      DATARES:ParsErr01,DATARES:ParsErr02,DATARES:ParsErr03
	dw      DATARES:ParsErr04,DATARES:ParsErr05,DATARES:ParsErr06
	dw      DATARES:ParsErr07,DATARES:ParsErr08,DATARES:ParsErr09
	dw      DATARES:ParsErr10,DATARES:ParsErr11

NUMPARSMSGS     equ     ($ - ParsMsgPtrs) / 2   ;M033


;*      Extended error messages.

	msg     ExtErr01,<"���ࠢ��쭠� �㭪��">
	msg     ExtErr02,<"���� �� ������">
	msg     ExtErr03,<"���� �� ������">
	msg     ExtErr04,<"����� ᫨誮� ����� 䠩���">
	msg     ExtErr05,<"��� ����㯠 ">
	msg     ExtErr06,<"���ࠢ���� ���ਯ��">
	msg     ExtErr07,<"�ᯮ�祭� ����� �ࠢ����� �������">
	msg     ExtErr08,<"�������筮 �����">
	msg     ExtErr09,<"���ࠢ���� ���� ����� �����">
	msg     ExtErr10,<"�訡�� � ��६����� �।� (Environment)">
	msg     ExtErr11,<"���ࠢ���� �ଠ�">
	msg     ExtErr12,<"���ࠢ���� ��ࠬ��� �㭪樨">
	msg     ExtErr13,<"���ࠢ���� �����">

	msg     ExtErr15,<"���ࠢ��쭮 ����� ���">
	msg     ExtErr16,<"����⪠ 㤠���� ⥪�騩 ��⠫��">
	msg     ExtErr17,<"��㣮� ���ன�⢮">
	msg     ExtErr18,<"����� ����������">

	msg     ExtErr80,<"���� �������">

	msg     ExtErr82,<"�� 㤠���� ᮧ���� ������� ��⠫���">
	msg     ExtErr83,<"�訡�� �� ���饭�� � ���뢠��� INT 24">
	msg     ExtErr84,<"���誮� ����讥 �᫮ ��ॠ���権">
	msg     ExtErr85,<"����������� ��ॠ�����">
	msg     ExtErr86,<"���ࠢ���� ��஫�">
	msg     ExtErr87,<"���ࠢ���� ��ࠬ���">
	msg     ExtErr88,<"�訡�� ������ � ��">
	msg     ExtErr89,<"�㭪�� �� �����ন������ ����">
	msg     ExtErr90,<"�ॡ㥬� ��������� ��⥬� �� ��⠭�����">

;       List of ptrs to extended error messages.
;       In order, beginning with extended error number 1.
;       Critical error messages are included here, as well as in the
;       critical error message list.  
;       Error numbers without messages are included as null ptrs.

ExtMsgPtrs      label   word
	dw      DATARES:ExtErr01,DATARES:ExtErr02,DATARES:ExtErr03
	dw      DATARES:ExtErr04,DATARES:ExtErr05,DATARES:ExtErr06
	dw      DATARES:ExtErr07,DATARES:ExtErr08,DATARES:ExtErr09
	dw      DATARES:ExtErr10,DATARES:ExtErr11,DATARES:ExtErr12
	dw      DATARES:ExtErr13,0,                DATARES:ExtErr15
	dw      DATARES:ExtErr16,DATARES:ExtErr17,DATARES:ExtErr18
	dw      DATARES:ExtErr19,DATARES:ExtErr20,DATARES:ExtErr21
	dw      DATARES:ExtErr22,DATARES:ExtErr23,DATARES:ExtErr24
	dw      DATARES:ExtErr25,DATARES:ExtErr26,DATARES:ExtErr27
	dw      DATARES:ExtErr28,DATARES:ExtErr29,DATARES:ExtErr30
	dw      DATARES:ExtErr31,DATARES:ExtErr32,DATARES:ExtErr33
	dw      DATARES:ExtErr34,DATARES:ExtErr35,DATARES:ExtErr36
	dw      DATARES:ExtErr37,DATARES:ExtErr38,DATARES:ExtErr39
	dw      80-40 dup (0) ; null ptrs for errors 40-79
	dw      DATARES:ExtErr80,0,                DATARES:ExtErr82
	dw      DATARES:ExtErr83,DATARES:ExtErr84,DATARES:ExtErr85
	dw      DATARES:ExtErr86,DATARES:ExtErr87,DATARES:ExtErr88
	dw      DATARES:ExtErr89,DATARES:ExtErr90
ExtMsgPtrsEnd   label   word

NUMEXTMSGS      equ     ($ - ExtMsgPtrs) / 2    ;M033

ExtMsgEnd       label   byte    ; end of extended error messages
				; = end of resident if /msg is used