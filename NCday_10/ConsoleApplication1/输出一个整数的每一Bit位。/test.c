//输出一个整数的每一Bit位。
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	for (int i = 31; i >= 0; i--)
	{
		printf("%d ", (a >> i)&1);
	}
	printf("\n");
	system("pause");
	return 0;
}