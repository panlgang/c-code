#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int average(int x, int y)
{
	return (x&y) + ((x^y) >> 1);//必须加括号因为+号的优先级比右移运算符高。
}
int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	scanf("%d%d", &a, &b);
	ret = average(a, b);
	printf("%d\n", ret);
	system("pause");
	return 0;
}