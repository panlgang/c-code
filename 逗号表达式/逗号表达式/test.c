#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	a = 3 * 2, a * 8;     //先求解a=3*2，得到a=6，然后6*8=48；表达式的值为48，变量a的值为6
	b = (3 * 2, a * 8);   
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}