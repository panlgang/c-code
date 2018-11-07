#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int arr[N] = { 0 };
	int i = 0;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i <N / 2; i++)
	{
		int t = arr[i];
		arr[i] = arr[N - i - 1];
		arr[N - i - 1] = t;
	}
	for (i = 0; i <N; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}