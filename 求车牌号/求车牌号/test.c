#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, z;
	printf("≥µ≈∆∫≈ «£∫");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (z = 31; z < 100; z++)
			{
				if (i * 1000 + i * 100 + j * 10 + j == z*z)
				{
					printf("%d\n", z*z);
				}
			}
		}
	}
	system("pause");
	return 0;
}