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
	printf("轮玩家走：");
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
	printf("轮电脑走:\n");
	while (1)
	{
		x = rand() % row;//电脑落子，范围0--2
		y = rand() % col;//电脑落子，范围0--2;
		//printf("x=%d,y=%d\n", x, y);电脑走的坐标
		if (map[1][1] == ' ')
		{
			map[1][1] = '0';
			break;
		}	
		else if (map[x][y] == ' ')//判断是否为空格,如果是直接落子，否则重新生成随机坐标坐标
		{
			map[x][y] = '0';
			break;
		}
	}
}
char is_full(char map[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = row*col;//总的棋盘格子
	for (i = 0; i < row; i++)//判断是否平局，即9个格子全满
	{
		for (j = 0; j < col; j++)
		{
			if (map[i][j] == 'X' || map[i][j] == '0')
				count--;
		}
	}
	 if (count == 0)
		return '1';
}
char is_win(char map[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	char ret = 0;
	ret = is_full(map, ROW, COL);
	for (i = 0; i < row; i++)
	{
		//判断每一行的row个是否相等
		if (map[i][0] == map[i][1] && map[i][1] == map[i][2] && map[i][0] != ' ')
			return map[i][0];
	}
	    //判断每一列的col个是否相等
	for (j = 0; j < col; j++)
	{
		if (map[0][j] == map[1][j] && map[1][j] == map[2][j] && map[1][j] != ' ')
			return map[0][j];
	}
	   //判断主对角线
	if (map[0][0] == map[1][1] && map[1][1] == map[2][2] && map[2][2] != ' ')
		return map[1][1];
	  //判断次对角线
    if (map[0][2] == map[1][1] && map[1][1] == map[2][0] && map[1][1] != ' ')
		return map[1][1];
	//判断平局
	if (ret =='1')
	{
		return  'p';
	}
	
}
