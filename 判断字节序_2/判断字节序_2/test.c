#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
union Un
{
	int i;
	char c;
};
int main()
{
	union Un un;
	un.i = 1;               //在联合体的四个字节中存储1，然后输出最低字节的内容，为1则小端，为0则大端
	printf("%d\n", un.c);
	system("pause");
	return 0;
}