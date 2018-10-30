#include"game.h"
void menu()
{
	printf("******************************\n");
	printf("**********1. P L A Y**********\n");
	printf("**********0. E X I T**********\n");
	printf("******************************\n");
}
void init_arr(char mine[ROWS][COLS], char show[ROW][COL])
{
	memset(mine, '0', ROWS*COLS);
	memset(show, '*', ROW*COL);
}
void display_show(char show[ROW][COL], int x, int y)
{
	int i = 0;
	int j = 0;
	printf("%d ", 0);
	for (i = 1; i <= x; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i < x; i++)
	{
		printf("%d ", i + 1);
		for (j = 0; j < y; j++)
		{
			printf("%c ", show[i][j]);
		}
		printf("\n");
	}
}
void display_mine(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	printf("%d ", 0);
	for (i = 1; i <= x; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= y; i++)
	{
		printf("%d ", i );
		for (j = 1; j <= y; j++)
		{
			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}
}
void set_mine(char mine[ROWS][COLS], int x, int y)
{
	int count = Count;
	int i = 0;
	int j = 0;
	while (count)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		//printf("(%d,%d)\n", x, y);
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
void swap_mine(char mine[ROWS][COLS], char show[ROW][COL] ,int row, int col)
{
	int x = 0;
	int y = 0;
	int ret = 0;
	int count = 0;
	int tmp = 1;
	while (count!=row*col-Count)
	{
		printf("请输入坐标;");
		scanf("%d%d", &x, &y);
		//printf("%c\n", mine[x][y]);
		if ((x<1 || x>9) | (y<1 || y>9))
		{
			printf("坐标不合法");
			continue;
		}
		else if (mine[x][y] == '1')
		{
			if (tmp == 1)
			{
				avoid(mine, x, y);
				tmp++;
				//display_mine(mine, ROW, COL);
				ret = get_count(mine, x, y);
				show[x-1][y - 1] = ret + '0';
				system("cls");
				display_show(show, ROW, COL);
				count++;
			}
			else if (mine[x][y] == '1')
			{
				printf("踩雷了！\n");
				system("cls");
				display_mine(mine, ROW, COL);
				return;
			}		
		}
		else if (mine[x][y] == '0')
		{
			tmp++;
			ret = get_count(mine, x, y);
			show[x - 1][y - 1] = ret + '0';
			//open_mine(mine, show, x-1 , y-1);
			system("cls");
			display_show(show, ROW, COL);
			count++;
		}
	}
	printf("恭喜你，你赢了\n");
	//system("cls");
	display_mine(mine, ROW, COL);
}
int get_count(char mine[ROWS][COLS],int x,int y)
{
	int ret = 0;
	ret = (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1]) - 48 * 8;
	return ret;
}
void avoid(char mine[ROWS][COLS], int x, int y)
{
	if (mine[x][y] == '1')
	{
		mine[x][y] = '0';
		while (1)
		{
			int x1 = rand() % 9 + 1;
			int y1 = rand() % 9 + 1;
			if (mine[x1][y1] == '0' && ((x1 != x ) && (y1 != y)))
			{
				mine[x1][y1] = '1';
				break;
			}
		}
	}
	
}
