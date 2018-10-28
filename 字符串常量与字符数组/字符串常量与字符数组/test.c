#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
char* string_1()
{
	char* p = "hello,world";//分排在静态区，直到程序结束方被释放
	return p;
}
char* string_2()
{
	char arr[] = "hello,world";//分配在栈区，函数调用结束，即被释放
	return arr;                //加一个static，就OK
}
int main()
{
	char* p = NULL;
	char* q = NULL;
	p = string_1();
	printf("%s\n", p);
	q = string_2();
	printf("%s\n", q);
	system("pause");
	return 0;
}