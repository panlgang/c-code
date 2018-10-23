#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#define N 7
int main()
{
	int arr[N][N] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < N; i++)//将每一行的第一个数字和最后一个数字定为1；
	{
		arr[i][0] = 1;
		if (i > 1)    //防止数组越界
		{
			arr[i][i - 1] = 1;
		}
		for (j = 1; j <= i ; j++)//每一个内部的数都等于它肩上的两个数之和
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N - i; j++)
		{
			printf(" ");    //打印空格，使其符合相应的格式
		}
		for (j = 0; j <=i-1; j++)
		{
			printf("%4d", arr[i][j]);   //遍历数组,每一行只需打印前i-1个数
		}
		printf("\n");
	}

	system("pause");
	return 0;
}