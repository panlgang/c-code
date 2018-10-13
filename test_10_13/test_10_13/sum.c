//等差数列求和
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int sum = 0;
	int d = 0;
	int a1 = 0;
	int i = 0;
	scanf("%d", &n);
	scanf("%d", &a1);
	scanf("%d", &d); 
	/*for (i = 1; i <= n; i++)
	{
		sum += a1 + (i-1)*d;
	}*/
	sum = n*a1 + n*(n - 1) / 2 * d;
	printf("%d", sum);
	system("pause");
	return 0;
}