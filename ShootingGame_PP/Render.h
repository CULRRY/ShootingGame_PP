#pragma once
#include "Console.h"

constexpr int32 FRAME = 50;

extern char szScreenBuffer[dfSCREEN_HEIGHT][dfSCREEN_WIDTH];


	//--------------------------------------------------------------------
	/// @brief 버퍼의 내용을 화면으로 찍어준다.
	///	@details 적군,아군,총알 등을 szScreenBuffer 에 넣어주고,
	///			 1 프레임이 끝나는 마지막에 본 함수를 호출하여 버퍼 -> 화면 으로 그린다.
	//--------------------------------------------------------------------
	void FlipBuffer();

	//--------------------------------------------------------------------
	/// @brief 화면 버퍼를 지운다.
	/// @details 매 프레임 그림을 그리기 직전에 버퍼를 지워 준다. 
	//--------------------------------------------------------------------
	void ClearBuffer();

	//--------------------------------------------------------------------
	/// @brief 버퍼의 특정 위치에 원하는 문자를 출력한다.
	///
	/// @param iX x좌표
	/// @param iY y좌표
	/// @param chSprite 출력할 문자
	//--------------------------------------------------------------------
	void DrawSprite(int iX, int iY, char chSprite);



	void DrawString(int y, int x, const char* string);

