#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int haming_distance(int n, int m)
{
	int count = 0;
	int x = m^n;
	while (x)
	{
		if (x&1==1)
		count++;
		x >>= 1;
	}
	return count;
}
int main()
{
	int a = 0;
	int b = 0;
	int ret = 0;
	scanf("%d%d", &a, &b);
	ret = haming_distance(a, b);
	printf("%d\n", ret);
	system("pause");
	return 0;
}