#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void sort(int* arr, int sz)//冒泡排序
{
	assert(arr);
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				arr[j] ^= arr[j + 1];
				arr[j + 1] ^= arr[j];
				arr[j] ^= arr[j + 1];
			}
		}
	}
}
int find_diff_num(int* arr, int sz)//查找
{
	assert(arr);
	int i = 0;
	for (i = 0; i < sz; i += 2)
	{
		if (arr[i] != arr[i + 1])
			return arr[i];
	}
	if (i >= sz)
	{
		return -1;
	}
}
int main()
{
	int arr[] = { 2, 5, 7, 82, 467, 2, 5, 7, 467 };//先排序再查找
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	ret = find_diff_num(arr, sz);
	if (ret != -1)
	{
		printf("%d\n", ret);
	}
	else
		printf("没有这个数\n");

	system("pause");
	return 0;
}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 7, 8, 1, 2, 3, 4, 5, 7, };//暴力查找法,且不管有多少个数不同都能找出来。
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; (j < sz); j++)
//		{
//			if (arr[i] == arr[j] && (i != j))
//				break;
//		}
//		if (j == sz)
//		{
//			printf("唯一不同的数是：%d\n", arr[i]);
//		}
//
//	}
//	system("pause");
//	return 0;
//}
