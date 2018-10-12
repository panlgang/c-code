#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	printf("Êý×ÖËþµÄ²ãÊýn=");
	scanf("%d", &n);
	//printf("%d", n);
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}



	system("pause");
	return 0;
}