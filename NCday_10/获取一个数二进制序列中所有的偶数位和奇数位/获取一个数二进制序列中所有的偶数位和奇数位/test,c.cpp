//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	printf("奇数位：");
	for (i = 31; i >=1; i -= 2)
	{
		printf("%d ", (n>>i)&1);
	}
	printf("\n偶数位: ");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", ((n >> i) & 1));
	}
	printf("\n");
	system("pause");
	return 0;
}
//00000000000000000000000000000001