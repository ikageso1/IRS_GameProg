#include "Wrapper.h"

int ���� = 0xff0000;
int �݂ǂ� = 0x00ff00;
int ���� = 0x0000ff;
int ���� = 0x000000;
int ���� = 0xffffff;

void startup(){
	ChangeWindowMode(TRUE);
	if(DxLib_Init()==-1){ 
		exit(-1);
	}
	SetDrawScreen(DX_SCREEN_BACK);
	SetTransColor(255,255,255);
}

void �G������(���� �悱,���� ����,���� �t�@�C����){
	LoadGraphScreen(�悱,����,�t�@�C����,TRUE);
}

int �����_��(���� ��){
	return GetRand(��);
}


void �~������(int �悱,int ����,int �傫��,int �F){
	DrawCircle(�悱,����,�傫��,�F,1);
}


bool �Ԃ�������(���� �悱,���� ����,���� �����̂悱,���� �����̂���,���� �傫��,���� �����̑傫��){
	����( ��Βl ( �悱+25 -�����̂悱 ) < �����̑傫�� + �傫��
		���� ��Βl( ����+15 - �����̂��� ) < �����̑傫�� + �傫��){
			return true;
	}�����łȂ�{
			return false;
	}
}