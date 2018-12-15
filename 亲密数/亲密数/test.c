#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int factor_sum(num)
{
	int sum = 0;
	int i = 0;
	for (i = 1; i < num; i++)
	{
		if (num%i == 0)
		{
			sum += i;
		}
	}
	return sum;
}
int is_friend(int a, int b,int i,int j)
{
	if (a == j&&b == i)
		return 1;
	return 0;
}	
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3000; i++)
	{
		for (j = i+1; j < 3000; j++)
		{
			if (factor_sum(i) == j&&factor_sum(j) == i)
			{
				printf("<%d%d>", i, j);
			}
		}
		
	}
	system("pause");
	return 0;
}