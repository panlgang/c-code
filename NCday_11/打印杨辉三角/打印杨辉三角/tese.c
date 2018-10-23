//µÝ¹é·¨´òÓ¡Ñî»ÔÈý½Ç
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#define N 7
int yh( int i, int j);
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%5d", yh( i, j));
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
int yh(int i, int j)
{
	if (j== 1||i==j)
		return  1;
	else
		return yh(i - 1, j - 1) + yh(i - 1, j);
}