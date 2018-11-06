#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void print_1(char** ch, int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", ch[i]);
	}
}
void print_2(int** arr, int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr1[] = { 1, 2, 3 };
	int arr2[] = { 4, 5, 6 };
	int* arr[] = { arr1, arr2 };
	char* str[] = { "zhangsan", "lisi", "wangyu" };
	print_1(str, 3);
	print_2(arr, 2);
	system("pause");
	return 0;
}