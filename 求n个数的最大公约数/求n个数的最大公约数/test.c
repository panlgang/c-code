#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int gcd(int a, int b)
{
	int r = 0;
	int max = a > b ? a : b;
	int min = a < b ? a : b;
	r = max%min;
	while (r)
	{
		max = min;
		min = r;
		r = max%min;	
	}
	return min;
}
int main()
{
	int b = 0;
	int a = 0;
	int n = 3;
	scanf("%d", &b);
	for (int i = 1; i < n; i++)
	{
		scanf("%d", &a);
		b=gcd(b, a);
	}
	printf("%d\n", b);
	system("pause");
	return 0;
}