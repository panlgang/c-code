#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("**********************************************\n");
	printf("******************1:play**********************\n");
	printf("******************0:exit**********************\n");
	printf("**********************************************\n");
}
void game()
{
	int num = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请输入你猜的数（0--100）num=");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("猜大了\n");
		}
		else if (num == ret)
		{
			printf("恭喜你猜对了！\n");
			break;
		}
		else
		{
			printf("猜小了\n");
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int a = 0;
	int num = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (a);
	system("pause");
	return 0;
}