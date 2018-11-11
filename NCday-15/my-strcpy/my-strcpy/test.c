//模拟实现strcpy;
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strcpy(char* str, const char* arr)//char* 类型为了实现链式访问！
{
	assert(arr);
	assert(str);
	char* p = str;
	while (*str++ = *arr++)
	{
		;
	}
	return p;
}
int main()
{
	char arr[] = "hello,bit";
	char str[10] = { 0 };
	printf("%s\n", my_strcpy(str, arr));
	system("pause");
	return 0;
}