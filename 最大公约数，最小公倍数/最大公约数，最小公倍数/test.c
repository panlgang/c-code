#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int gcd_1(int x,int y)
{
	if (x <= 0 || y <= 0)
		return -1;
	int min = x < y ? x : y;
	while (min)
	{
		if (x%min == 0 && y%min == 0)
			return min;
		else
	         min--;
	}
	return -1;
}
int gcd_2(int a, int b)
{
	if (a <= 0 || b <= 0)
		return -1;
	int min = a < b ? a : b;
	int max = a > b ? a : b;
	if (max%min == 0)
		return min;
	else
		return gcd_2(min, max%min);

}
int lcm(int a, int b)
{
	if (a <= 0 || b <= 0)
		return -1;
	int max = a > b ? a : b;
	while (max)
	{
		if (max%a == 0 && max%b == 0)
			return max;
		else
			max++;
	}
	
}
int main()
{
	int a=0, b=0;
	int ret = 0;
	scanf("%d%d", &a, &b);
	ret = gcd_1(a, b);
	printf("非递归实现%d %d的最大公约数是%d\n", a, b, ret);
	ret = gcd_2(a, b);
	printf("  递归实现%d %d的最大公约数是%d\n",a, b, ret);
	ret = a*b / ret;
	printf("① %d %d的最大公倍数是%d\n", a, b, ret);
	ret = lcm(a, b);
	printf("② %d %d的最大公倍数是%d\n",a,b,ret);
	system("pause");
	return 0;
}