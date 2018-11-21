#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int flag = 0;
	for (i = 0;; i = i + 7)
	{
		if (i % 2 == 1 && i % 3 == 2 && i % 5 == 4 && i % 6 == 5 && i % 7 == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("The result of question if %d\n", i);
	}
	else
	{
		printf("The result of question hasnot answer\n");
	}
	system("pause");
	return 0;
}