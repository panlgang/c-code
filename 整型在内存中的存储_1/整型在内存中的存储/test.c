#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;     
	printf("a=%d,b=%d,c=%d\n", a, b, c);  //整型提升，按照有符号整数输出
	system("pause");
	return 0;

}