#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("strlen: %d\n", strlen(a));//当a[i]=0时，统计前面元素的个数即为长度！
	system("pause");                  //(-1)----(-128)----(127)-----0
	return  0;
}