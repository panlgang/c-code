//6.递归和非递归分别实现求n的阶乘
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int fzctorial_1(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
         sum *= i;
	}	 
	return sum;
}
int fzctorial_2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n*fzctorial_2(n - 1);
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fzctorial_1(n);
	printf("%d\n", ret);
	ret = fzctorial_2(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}