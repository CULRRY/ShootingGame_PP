#include "stdafx.h"
#include "Game.h"

int main(void)
{


	Init();

	while (true)
	{

		KeyProcess();

		Update();

		if (gExit == true)
		{
			return 0;
		}

		Render();

		Sleep(200);
	}
}
