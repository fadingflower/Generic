;	Command.com initialization messages.
;
;	See resmsg.equ for macro definition.

ifdef BILINGUAL
	msg	BadVerMsg,   <"DOS ������ Ʋ���ϴ�.",CR,LF,0,"Incorrect DOS version",CR,LF>
	msg	OutEnvMsg,   <"ȯ�� ������ �����մϴ�.",CR,LF,0,"Out of environment space",CR,LF>
ifndef ROMDOS
        msg     CopyrightMsg,<CR,LF,"Microsoft(R) Windows DOS",CR,LF,\
"             (C)Copyright Microsoft Corp 1990-2001.  ",CR,LF,0,"Microsoft(R) Windows DOS",CR,LF,\
"(C)Copyright Microsoft Corp 1990-2001.",CR,LF>
else
        msg     CopyrightMsg,<CR,LF,CR,LF,"Microsoft(R) MS-DOS(R) ROM ���� 5.00",CR,LF,\
"             (C)Copyright Microsoft Corp 1981-2001.  ",CR,LF,0,CR,LF,CR,LF,"Microsoft(R) MS-DOS(R) ROM Version 5.00",CR,LF,\
"             (C)Copyright Microsoft Corp 1981-2001.",CR,LF>
endif
	msg	BadComLkMsg, <"������ COMMAND ã�� ���丮�� �ùٸ��� �ʽ��ϴ�.",CR,LF,0,"Specified COMMAND search directory bad",CR,LF>
	msg	BadComAccMsg,<"������ COMMAND ã�� ���丮�� ���� �׼����� �źεǾ����ϴ�.",CR,LF,0,"Specified COMMAND search directory bad access denied",CR,LF>

	msg	Help1Msg  <"MS-DOS ���ɾ� ���������͸� ���� �����մϴ�.",CR,LF,CR,LF,0,"Starts a new instance of the MS-DOS command interpreter.",CR,LF,CR,LF>
	msg	Help2Msg  <"COMMAND [[����̺�:]��� [����̽�] [/E:nnnnn] [/P] [/C ���ڿ�] [/MSG]",CR,LF,CR,LF,0,"COMMAND [[drive:]path] [device] [/E:nnnnn] [/P] [/C string] [/MSG]",CR,LF,CR,LF>
	msg	Help3Msg  <"  [����̺�:]���   COMMAND.COM ������ �ִ� ���丮�� �����մϴ�.",CR,LF,0,"  [drive:]path    Specifies the directory containing COMMAND.COM file.",CR,LF>
        msg     Help4Msg  <"  ����̽�          ���ɾ� ����¿� ����� ����̽��� �����մϴ�.",CR,LF,0,"  device          Specifies the device to use for command input and output.",CR,LF>
	msg	Help5Msg  <"  /E:nnnnn          �ʱ� ȯ�� ũ�⸦ nnnnn ����Ʈ�� �����մϴ�.",CR,LF,0,"  /E:nnnnn        Sets the initial environment size to nnnnn bytes.",CR,LF>
	msg	Help6Msg  <"  /P                �� ���ɾ� ���������͸� ���������� ����ϴ�. (���� ����)",CR,LF,0,"  /P              Makes the new command interpreter permanent (can't exit).",CR,LF>
	msg	Help7Msg  <"  /C ���ڿ�         ���ڿ��� ������ ���ɾ �����ϰ� ����ϴ�.",CR,LF,0,"  /C string       Carries out the command specified by string, and then stops.",CR,LF>
	msg	Help8Msg  <"  /MSG              ��� ���� �޽����� �޸𸮿� �����ϵ��� �����մϴ�.",CR,LF,0,"  /MSG            Specifies that all error messages be stored in memory. You",CR,LF>
	msg	Help9Msg  <"                    �� ����ġ��/P�� �Բ� �����ؾ� �մϴ�.",CR,LF,0,"                  need to specify /P with this switch.",CR,LF>
else
	msg	BadVerMsg,   <"DOS ������ Ʋ���ϴ�.",CR,LF>
	msg	OutEnvMsg,   <"ȯ�� ������ �����մϴ�.",CR,LF>
        msg     CopyrightMsg,<CR,LF,CR,LF,"Microsoft(R) MS-DOS(R) ���� 5.00",CR,LF,\
"             (C)Copyright Microsoft Corp 1981-2001.  ",CR,LF>
	msg	BadComLkMsg, <"������ COMMAND ã�� ���丮�� �ùٸ��� �ʽ��ϴ�.",CR,LF>
	msg	BadComAccMsg,<"������ COMMAND ã�� ���丮�� ���� �׼����� �źεǾ����ϴ�.",CR,LF>

	msg	Help1Msg  <"MS-DOS ���ɾ� ���������͸� ���� �����մϴ�.",CR,LF,CR,LF>
	msg	Help2Msg  <"COMMAND [[����̺�:]��� [����̽�] [/E:nnnnn] [/P] [/C ���ڿ�] [/MSG]",CR,LF,CR,LF>
	msg	Help3Msg  <"  [����̺�:]���   COMMAND.COM ������ �ִ� ���丮�� �����մϴ�.",CR,LF>
        msg     Help4Msg  <"  ����̽�          ���ɾ� ����¿� ����� ����̽��� �����մϴ�.",CR,LF>
	msg	Help5Msg  <"  /E:nnnnn          �ʱ� ȯ�� ũ�⸦ nnnnn ����Ʈ�� �����մϴ�.",CR,LF>
	msg	Help6Msg  <"  /P                �� ���ɾ� ���������͸� ���������� ����ϴ�. (���� ����)",CR,LF>
	msg	Help7Msg  <"  /C ���ڿ�         ���ڿ��� ������ ���ɾ �����ϰ� ����ϴ�.",CR,LF>
	msg	Help8Msg  <"  /MSG              ��� ���� �޽����� �޸𸮿� �����ϵ��� �����մϴ�. �� ����ġ��",CR,LF>
	msg	Help9Msg  <"                    /P�� �Բ� �����ؾ� �մϴ�.",CR,LF>
endif


HelpMsgs	dw	RESGROUP:Help1Msg,RESGROUP:Help2Msg
		dw	RESGROUP:Help3Msg,RESGROUP:Help4Msg
		dw	RESGROUP:Help5Msg,RESGROUP:Help6Msg
                dw      RESGROUP:Help7Msg,RESGROUP:Help8Msg
		dw	RESGROUP:Help9Msg,0

	public	HelpMsgs
