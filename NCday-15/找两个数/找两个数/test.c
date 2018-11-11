//一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr []= { 23, 4, 35,4 , 57, 8, 8, 12, 44 ,23,35,44};
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++)
	{
		for (j = 0;j < len; j++)
		{
			if (arr[i] == arr[j] && (j != i))
				break;
		}
		if (j == len)
		{
			printf("%d\n", arr[i]);
		}
	}
	system("pause");
	return 0;
}