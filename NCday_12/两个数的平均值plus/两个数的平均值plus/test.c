#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	float ave = 0;
	scanf("%d%d", &a, &b);
	ave = b + (a - b) / 2.0;
	printf("ave=%f\n", ave);
	system("pause");
	return 0;
}