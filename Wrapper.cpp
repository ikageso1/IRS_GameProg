#include "Wrapper.h"

int あか = 0xff0000;
int みどり = 0x00ff00;
int あお = 0x0000ff;
int くろ = 0x000000;
int しろ = 0xffffff;

void startup(){
	ChangeWindowMode(TRUE);
	if(DxLib_Init()==-1){ 
		exit(-1);
	}
	SetDrawScreen(DX_SCREEN_BACK);
	SetTransColor(255,255,255);
}

void 絵をかく(かず よこ,かず たて,文字 ファイル名){
	LoadGraphScreen(よこ,たて,ファイル名,TRUE);
}

int ランダム(かず 数){
	return GetRand(数);
}


void 円をかく(int よこ,int たて,int 大きさ,int 色){
	DrawCircle(よこ,たて,大きさ,色,1);
}


bool ぶつかったら(かず よこ,かず たて,かず いしのよこ,かず いしのたて,かず 大きさ,かず いしの大きさ){
	もし( 絶対値 ( よこ+25 -いしのよこ ) < いしの大きさ + 大きさ
		かつ 絶対値( たて+15 - いしのたて ) < いしの大きさ + 大きさ){
			return true;
	}そうでない{
			return false;
	}
}