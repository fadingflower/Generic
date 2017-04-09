;	Command.com initialization messages.
;
;	See resmsg.equ for macro definition.

ifdef BILINGUAL
	msg	BadVerMsg,   <"DOS �̃o�[�W�������Ⴂ�܂�.",CR,LF,0,"Incorrect DOS version",CR,LF>
	msg	OutEnvMsg,   <"���ϐ��̂��߂̃�����������܂���.",CR,LF,0,"Out of environment space",CR,LF>
ifndef ROMDOS
        msg     CopyrightMsg,<CR,LF,"Microsoft(R) Windows DOS",CR,LF,\
"             (C)Copyright Microsoft Corp 1990-2001.  ",CR,LF,0,"Microsoft(R) Windows DOS",CR,LF,\
"(C)Copyright Microsoft Corp 1990-2001.",CR,LF>
else
        msg     CopyrightMsg,<CR,LF,CR,LF,"Microsoft(R) MS-DOS(R) ROM �ް�ޮ� 5.00",CR,LF,\
"             (C)Copyright Microsoft Corp 1981-2001.  ",CR,LF,0,CR,LF,CR,LF,"Microsoft(R) MS-DOS(R) ROM Version 5.00",CR,LF,\
"             (C)Copyright Microsoft Corp 1981-2001.",CR,LF>
endif
	msg	BadComLkMsg, <"�w�肳�ꂽ�R�}���h�����f�B���N�g�����Ⴂ�܂�.",CR,LF,0,"Specified COMMAND search directory bad",CR,LF>
	msg	BadComAccMsg,<"�w�肳�ꂽ�R�}���h�����f�B���N�g���ɃA�N�Z�X�ł��܂���.",CR,LF,0,"Specified COMMAND search directory bad access denied",CR,LF>

	msg	Help1Msg  <"MS-DOS�R�}���h�C���^�v���^��V�����N�����܂�.",CR,LF,CR,LF,0,"Starts a new instance of the MS-DOS command interpreter.",CR,LF,CR,LF>
	msg	Help2Msg  <"COMMAND [[��ײ��:]�߽] [���޲�] [/E:nnnnn] [/P] [/C ������] [/MSG]",CR,LF,CR,LF,0,"COMMAND [[drive:]path] [device] [/E:nnnnn] [/P] [/C string] [/MSG]",CR,LF,CR,LF>
	msg	Help3Msg  <"  [��ײ��:]�߽   COMMAND.COM�t�@�C���̂���f�B���N�g�����w�肵�܂�.",CR,LF,0,"  [drive:]path    Specifies the directory containing COMMAND.COM file.",CR,LF>
        msg     Help4Msg  <"  ���޲�         �R�}���h���o�͂̂��߂Ɏg�p����f�o�C�X���w�肵�܂�.",CR,LF,0,"  device          Specifies the device to use for command input and output.",CR,LF>
	msg	Help5Msg  <"  /E:nnnnn       ���ϐ��̃T�C�Y�̏����l�Ƃ��� nnnnn �o�C�g��ݒ肵�܂�.",CR,LF,0,"  /E:nnnnn        Sets the initial environment size to nnnnn bytes.",CR,LF>
	msg	Help6Msg  <"  /P             �V���ȃR�}���h�C���^�v���^���풓�����܂�. (���A���܂���)",CR,LF,0,"  /P              Makes the new command interpreter permanent (can't exit).",CR,LF>
	msg	Help7Msg  <"  /C ������      ������Ŏw�肵���R�}���h�̎��s��, ���A���܂�.",CR,LF,0,"  /C string       Carries out the command specified by string, and then stops.",CR,LF>
	msg	Help8Msg  <"  /MSG           �S�G���[���b�Z�[�W�����������ɕێ����܂�. ���̃X�C�b�`��",CR,LF,0,"  /MSG            Specifies that all error messages be stored in memory. You",CR,LF>
	msg	Help9Msg  <"                 /P �X�C�b�`�Ɠ����Ɏw�肵�Ȃ���΂Ȃ�܂���.",CR,LF,0,"                  need to specify /P with this switch.",CR,LF>
else
	msg	BadVerMsg,   <"DOS �̃o�[�W�������Ⴂ�܂�.",CR,LF>
	msg	OutEnvMsg,   <"���ϐ��̂��߂̃�����������܂���.",CR,LF>
        msg     CopyrightMsg,<CR,LF,CR,LF,"Microsoft(R) MS-DOS(R) �ް�ޮ� 5.00",CR,LF,\
"             (C)Copyright Microsoft Corp 1981-2001.  ",CR,LF>
	msg	BadComLkMsg, <"�w�肳�ꂽ�R�}���h�����f�B���N�g�����Ⴂ�܂�.",CR,LF>
	msg	BadComAccMsg,<"�w�肳�ꂽ�R�}���h�����f�B���N�g���ɃA�N�Z�X�ł��܂���.",CR,LF>

	msg	Help1Msg  <"MS-DOS �R�}���h�C���^�v���^��V�����N�����܂�.",CR,LF,CR,LF>
	msg	Help2Msg  <"COMMAND [[��ײ��:]�߽] [���޲�] [/E:nnnnn] [/P] [/C ������] [/MSG]",CR,LF,CR,LF>
	msg	Help3Msg  <"  [��ײ��:]�߽   COMMAND.COM �t�@�C���̂���f�B���N�g�����w�肵�܂�.",CR,LF>
        msg     Help4Msg  <"  ���޲�         �R�}���h���o�͂̂��߂Ɏg�p����f�o�C�X���w�肵�܂�.",CR,LF>
	msg	Help5Msg  <"  /E:nnnnn       ���ϐ��̃T�C�Y�̏����l�Ƃ��� nnnnn �o�C�g��ݒ肵�܂�.",CR,LF>
	msg	Help6Msg  <"  /P             �V���ȃR�}���h�C���^�v���^���풓�����܂�. (���A���܂���)",CR,LF>
	msg	Help7Msg  <"  /C ������      ������Ŏw�肵���R�}���h�̎��s��, ���A���܂�.",CR,LF>
	msg	Help8Msg  <"  /MSG           �S�G���[���b�Z�[�W�����������ɕێ����܂�. ���̃X�C�b�`��",CR,LF>
	msg	Help9Msg  <"                 /P �X�C�b�`�Ɠ����Ɏw�肵�Ȃ���΂Ȃ�܂���.",CR,LF>
endif


HelpMsgs	dw	RESGROUP:Help1Msg,RESGROUP:Help2Msg
		dw	RESGROUP:Help3Msg,RESGROUP:Help4Msg
		dw	RESGROUP:Help5Msg,RESGROUP:Help6Msg
                dw      RESGROUP:Help7Msg,RESGROUP:Help8Msg
		dw	RESGROUP:Help9Msg,0

	public	HelpMsgs