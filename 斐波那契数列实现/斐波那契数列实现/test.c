#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
//非递归实现
int fib_1(n)
{
	int i = 1;
	int a = 1;
	int b = 1;
	int c = 0;
	for (i = 1; i <= n - 2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
//递归实现
int fib_2(n)
{
	int i = 0;
	if (n <= 2)
		return 1;
	else
		return fib_2(n - 1) + fib_2(n - 2);
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入要求第多少个斐波那契数n=");
	scanf("%d", &n);
	ret = fib_1(n);
	printf("%d\n", ret);
	ret = fib_2(n);
	printf("%d\n", ret);;
	system("pause");
	return 0;
}