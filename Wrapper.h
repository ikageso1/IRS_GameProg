#pragma once
#include "DxLib.h"

#define ���C���v���O���� int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)
#define �v���O�������͂��߂� startup();
#define �v���O����������� DxLib_End();
#define ���肩�����͂��� while(ProcessMessage()!=-1){ClearDrawScreen();
#define ���肩��������� ScreenFlip();}
#define	���肩�������ʂ��� break;
#define ���������ꂽ CheckHitKey(KEY_INPUT_UP)
#define ���������ꂽ CheckHitKey(KEY_INPUT_DOWN)
#define ���������ꂽ CheckHitKey(KEY_INPUT_RIGHT)
#define ���������ꂽ CheckHitKey(KEY_INPUT_LEFT)
#define �X�y�[�X�������ꂽ CheckHitKey(KEY_INPUT_SPACE)
#define ESC�L�[�������ꂽ CheckHitKey(KEY_INPUT_ESCAPE)
#define ���� int
#define ���� double
#define ���� TCHAR*
#define ����(str) if(str)
#define �����łȂ� else
#define ���� &&
#define �܂��� ||
#define ���肩����(x) for(int �΂񂲂�=0;�΂񂲂�<x;�΂񂲂�++)
#define ��Βl(x) abs(x)
#define �͂� true
#define ������ false
#define ��菬���� <
#define ���傫�� >
#define ���Ȃ� ==
#define �ӂ₷ +=
#define �ւ炷 -=

extern int ����;
extern int �݂ǂ�;
extern int ����;
extern int ����;
extern int ����;

//void �v���O�������͂��߂�();
void startup();
//void �v���O�����������();
int �����_��(���� ��);
void �G������(���� �悱,���� ����,���� �t�@�C����);
void �~������(���� �悱,���� ����,���� �傫��,���� �F);
bool �Ԃ�������(���� �悱,���� ����,���� �����̂悱,���� �����̂���,���� �傫��,���� �����̑傫��);