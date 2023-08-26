#pragma once

//--------------------------------------------------------------------
// 아군 구조체 선언
//--------------------------------------------------------------------
struct Player
{
	int hp;					// 플레이어 HP

	int x;						// 플레이어 좌표
	int y;

	int iVisible;				// 플레이어 생존 여부.

};

//--------------------------------------------------------------------
// 플레이어 인스턴스 선언, (1인용 이니 하나만 하자)
//--------------------------------------------------------------------
extern Player gPlayer;


void InitPlayer();

//////////////////////////////////////////////////////////////////////
//
// 플레이어 처리부 함수들
//
//////////////////////////////////////////////////////////////////////

//--------------------------------------------------------------------
// 스크린 버퍼에 플레이어 그리기
//--------------------------------------------------------------------
void Draw_Player(void);