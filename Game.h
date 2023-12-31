#pragma once
#define MAX_STAGE_LEVEL 3
#define MENU_SELECT_FRAME 10

extern bool gExit;
extern int32 gFrameCount;

//-------------------------------------------------------------------
/// @brief 게임에 필요한 정보들을 초기화한다.
//-------------------------------------------------------------------
void Init();

//-------------------------------------------------------------------
/// @brief 게임의 로직을 갱신한다.
//-------------------------------------------------------------------
void Update();

//-------------------------------------------------------------------
/// @brief 게임 화면을 출력한다.
//-------------------------------------------------------------------
void Render();

//-------------------------------------------------------------------
/// @brief 키보드 입력과 관련된 로직을 처리한다.
//-------------------------------------------------------------------
bool KeyProcess();