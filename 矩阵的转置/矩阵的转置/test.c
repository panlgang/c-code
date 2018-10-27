#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr1[3][4] = { { 1, 2, 3, 4 }, { 1, 2, 3, 4 }, { 1, 2, 3, 4 } };
	int arr2[4][3] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr2[j][i] = arr1[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 3; i++)
		{
			printf("%d ", arr2[j][i]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}