#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int reverse(int num)
{
	int j = 0;
	while (num)
	{
		j = j * 10 + num % 10;
		num /= 10;
	}
	return j;
}
int main()
{
	int i = 0;
	for (i = 1; i <= 1000; i++)
	{
		if (i == reverse(i))
			printf("%d ", reverse(i));
	}
	system("pause");
	return 0;
}