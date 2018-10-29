#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void swap(int arr[],int len)
{
	int i = 0;
	int j = (len)/2;
	for (i = 0; i < j; i++)
	{
		while (arr[i] % 2 == 0 && (j<len))
		{
			if (arr[j] % 2 != 0)
			{
				int tmp = 0;
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	swap(arr, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}