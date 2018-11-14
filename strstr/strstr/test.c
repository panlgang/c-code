#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[] = "Tom is a boy ";//最后加一个空格，避免越界
	char* pch = (strstr(str, "boy"));
	strncpy(pch, "girl", 4);//实现字符串替换
	puts(str);
	system("pause");
	return 0;
}