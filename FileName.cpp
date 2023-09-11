#include <stdio.h>
#include <Windows.h>

//int main() {
//	
//	while (true)
//	{
//		system("cls");
//		int x = 0, y = 0;
//		printf("x,y ÁÂÇ¥ ÀÔ·Â : ");
//		scanf_s("%d %d", &x, &y);
//		COORD site;
//		site.X = x * 2;
//		site.Y = y;
//		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), site);
//
//		printf("½ÃÀÛÁ¡\n");
//
//		Sleep(3000);
//	}
//
//
//	return 0;
//}


//void SetPosition(int x, int y);
//
//int main()
//{
//	int x = 0, y = 0;
//	while (true)
//	{
//		system("cls");
//
//		//printf("ÁÂÇ¥ ÀÔ·Â : ");
//		//scanf_s("%d %d", &x, &y);
//		x++, y++;
//		SetPosition(x, y);
//		printf("½ÃÀÛÁ¡\n");
//
//		Sleep(1000);
//	}
//
//	return 0;
//}
//
//void SetPosition(int x, int y)
//{
//	COORD pos;
//	pos.X = x * 2;
//	pos.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}

void SetPosition(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
	int x = 0, y = 0;

	int color = 0;
	 
	while (true)
	{
		system("cls");

		if (GetAsyncKeyState(VK_LEFT))
		{
			x--;
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			x++;
		}
		if (GetAsyncKeyState(VK_UP))
		{
			y--;
		}
		if (GetAsyncKeyState(VK_DOWN))
		{
			y++;
		}

		SetPosition(x, y);

		color++;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("¿Ê");

		Sleep(50);
	}

	return 0;
}


