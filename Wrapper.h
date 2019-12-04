#pragma once
#include "DxLib.h"

#define メインプログラム int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)
#define プログラムをはじめる startup();
#define プログラムをおわる DxLib_End();
#define くりかえしはじめ while(ProcessMessage()!=-1){ClearDrawScreen();
#define くりかえしおわり ScreenFlip();}
#define	くりかえしをぬける break;
#define ↑がおされた CheckHitKey(KEY_INPUT_UP)
#define ↓がおされた CheckHitKey(KEY_INPUT_DOWN)
#define →がおされた CheckHitKey(KEY_INPUT_RIGHT)
#define ←がおされた CheckHitKey(KEY_INPUT_LEFT)
#define スペースがおされた CheckHitKey(KEY_INPUT_SPACE)
#define ESCキーがおされた CheckHitKey(KEY_INPUT_ESCAPE)
#define かず int
#define 小数 double
#define 文字 TCHAR*
#define もし(str) if(str)
#define そうでない else
#define かつ &&
#define または ||
#define くりかえす(x) for(int ばんごう=0;ばんごう<x;ばんごう++)
#define 絶対値(x) abs(x)
#define はい true
#define いいえ false
#define より小さい <
#define より大きい >
#define おなじ ==
#define ふやす +=
#define へらす -=

extern int あか;
extern int みどり;
extern int あお;
extern int くろ;
extern int しろ;

//void プログラムをはじめる();
void startup();
//void プログラムをおわる();
int ランダム(かず 数);
void 絵をかく(かず よこ,かず たて,文字 ファイル名);
void 円をかく(かず よこ,かず たて,かず 大きさ,かず 色);
bool ぶつかったら(かず よこ,かず たて,かず いしのよこ,かず いしのたて,かず 大きさ,かず いしの大きさ);