#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int t = 0;
	int a[10] = { 1, 2, 4, 5, 3, 6, 7, 8, 0, 9 };
	for (i = 0; i < 10-1; i++)
	{
		for (j = 0; j < 10-i-1 ; j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	system("pause");
	return 0;
}