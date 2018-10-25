#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int number_root(n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return  sum;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = number_root(n);
	while (ret >= 10)
	{
		ret=number_root(number_root(n));
	}
	printf("%d\n",ret);
	system("pause");
	return 0;
}