#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[], int left, int right, int key)
{
	int mid = (left + (right - left) / 2);
	if (left > right)
	{
		return -1;
	}
	if (key == arr[mid])
		return mid;
	else if (key > arr[mid])
	{
		binary_search(arr, mid + 1, right, key);
	}
	else
		binary_search(arr, left, mid - 1, key);
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret = 0;
	ret = binary_search(arr, 0, sz, 7);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
		printf("找到了，下标为%d\n", ret);
	system("pause");
	return 0;

}