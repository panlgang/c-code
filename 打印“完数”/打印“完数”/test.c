#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int factors(int n)
{
	int i = 0;
	int sum = 0;
	for (i = 1; i < n; i++)//i从1开始，分母不能为0；
	{
		if (n%i == 0)
		{
			sum += i;
		}
	}
	return sum;
}
int main()
{
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		if (i == factors(i))
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}