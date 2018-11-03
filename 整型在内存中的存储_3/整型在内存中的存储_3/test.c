#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	unsigned int i = 0;
	for (i = 9; i >= 0; i--)
	{
		Sleep(300);
		printf("%u\n", i);
	}

	system("pause");
	return 0;
}