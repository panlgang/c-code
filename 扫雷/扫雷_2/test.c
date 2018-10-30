#define _CRT_SECURE_NO_WARNINGS 2
#include"game.h"
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROW][COL] = { 0 };
	init_arr(mine, show);//***
	set_mine(mine, ROW, COL);
	//display_mine(mine, ROW, COL);
	system("cls");
	display_show(show, ROW, COL);
	swap_mine(mine,show, ROW, COL);
	
}
int main()
{
	srand((unsigned)time(NULL));
	int num = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (num);

	system("pause");
	return 0;
}