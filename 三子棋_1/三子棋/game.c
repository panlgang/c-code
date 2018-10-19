#define _CRT_SECURE_NO_WARNINGS 2
#include"game.h"
//初始化地图，用9个空格
void init(char map[ROW][COL], int row, int col)
{
	memset(&map[0][0], ' ', row*col*sizeof(map[0][0]));
}
//显示函数，向屏幕打印地图
void display(char map[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", map[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf(" ---");
				/*if (j< col - 1)
					printf("|");*/
			}
			printf("\n");
		}
	}
}
//玩家落子，通过坐标的形式
void player_move(char map[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("请玩家输入要走的坐标,并以空格隔开：");
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (1 <= x&&x <= row && 1 <= y&&y <= col)//确定坐标界限
		{
			if (map[x - 1][y - 1] == ' ')//判断该位置是否为空
			{
				map[x - 1][y - 1] = 'X';
				break;//落子成功直接跳出这个落子的循环
			}
			else	
				printf("该坐标已被占用，请重新输入:");
		}
		else
			printf("输入有误，请重新输入；");
		
	}
}
void computer_move(char map[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("轮电脑走\n");
	while (1)
	{
		x = rand() % row;//电脑落子，范围0--2
		y = rand() % col;//电脑落子，范围0--2
		if (map[x][y] == ' ')//判断是否为空格,如果是直接落子，否则重新生成随机坐标坐标
		{
			map[x][y] = '0';
			break;//
		}
		

	}
}
char is_win(char map[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < row; i++)//各种可以赢得情况
	{
		if (map[i][0] == map[i][1] && map[i][0] == map[i][2]&&map[0][0]!=' ')
			return map[i][0];//return 该情况下的字符
		if (map[0][i] == map[1][i] && map[1][i] == map[2][i]&&map[1][i]!=' ')
			return map[0][i];//return 该情况下的字符
		if (map[0][0] == map[1][1] && map[1][1] == map[2][2] && map[2][2] != ' ')
			return map[1][1];
		if (map[0][2] == map[1][1] && map[1][1] == map[2][0] && map[1][1] != ' ')
			return map[1][1];
	}
	//先判断输赢，再判断平局
	for (i = 0; i < row; i++)//判断是否平局，即9个格子全满
	{
		for (j = 0; j < col; j++)
		{
			if (map[i][j] == 'X' || map[i][j] == '0')
				count++;
			if (count == 9)
				return 'p';
		}
	}
	return 'G';
}
