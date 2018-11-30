#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int bubble(int arr[], int left, int right)
{
	int i = 0;
	if (left < right)
	{
		for (i = left; i <= right - 1; i++)
		{
			if (arr[i]>arr[i + 1])
			{
				arr[i] ^= arr[i + 1];
				arr[i + 1] ^= arr[i];
				arr[i] ^= arr[i + 1];
			}
		}
		bubble(arr, left, right - 1);
	}

}
//}
//int find_max(int arr[], int left, int right, int len)
//{
//	if (left == right)
//	{
//		return arr[left];
//	}
//	else
//	{
//		if (arr[left] > find_max(arr, left + 1, right, len - 1))
//			return arr[left];
//		else
//			return find_max(arr, left + 1, right, len - 1);
//	}
//}
//int Sum(int arr[],int left,int right)
//{
//	if (left == right)
//		return arr[left];
//	else
//		return arr[left] + Sum(arr, left + 1, right);
//}
int main()
{
	int arr[] = { 1, 2, 3, 4, 14, 13, 7, 8, 9, 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//printf("%d\n", find_max(arr,0,9, len));
	bubble(arr, 0, 9);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}