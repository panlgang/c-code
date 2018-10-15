#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int sq_search(int arr[], int key, int n)
{
	int i = 0;
	for (i = 0; i <= n ; i++)
	{
		if (key == arr[i])
			return i;
	}
	return -1;
}
int main()
{
	int ret = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int sz = (sizeof(arr) / sizeof(arr[0]))-1;
	ret= sq_search(arr, 0,sz);
	if (ret!=-1)
		printf("找到了，下标为%d\n", ret);
	else
		printf("找不到\n");
	system("pause");
	return 0;
}