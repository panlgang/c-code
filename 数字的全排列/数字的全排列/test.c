#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int arr[3] = { 1, 2, 3 };
	for (i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (i != j&&j != k&&i != k)
				{
					printf("%d%d%d ", arr[i],arr[j],arr[k]);
					printf("\n");
				}
			}
		}
	}
	system("pause");
	return 0;
}