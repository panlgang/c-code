#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int Count(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return Count(n - 1) + Count(n - 2);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Count(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}