#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#define N 3
#define M 3
int binary_search(int* arr,int left,int right,int key)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (key == arr[mid])
			return mid;
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid]>key)
		{
			right = mid - 1;
		}
	}
	return 1;
}
int search(int arr[N][M], int key)////蛇形找法
{
	int x = N - 3;
	int y = M - 1;
	while ((x < N) && (y < M))
	{
		if (arr[x][y] == key)
		{
			return 1;
		}
		else if (arr[x][y] < key)
		{
			x--;
		}
		else
		{
			y++;
		}
	}
	return -1;
}
int main()
{
	int i = 0;
	int ret = 0;
	int arr[N][M] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
	//for (i = 0; i < M; i++)          //三次二分查找就OK了
	//{
	//	ret = binary_search(arr[i], 0, 2, 3);
	//	if (ret != -1)
	//	{
	//		printf("(%d,%d)\n", i, ret);
	//	}
	//}
	ret=search(arr, 3);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
		printf("找不到\n");
	system("pause");
	return 0;
}