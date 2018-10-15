#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void print(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", j, i, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	printf("乘法口诀表的行数n=");
		scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}