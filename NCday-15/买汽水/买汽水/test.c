//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以喝多少汽水。
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int sum = 0;
	int i = 2;
	int num = 20;
	while (num > 1)
	{
		sum += num;
		num /= i;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}