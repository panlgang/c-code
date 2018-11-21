#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int red = 0;;
	int yeallow = 0;
	int green = 0;
	printf("red  yeallow  green\n");
	for (red = 0; red <= 3; red++)
	{
		for (yeallow = 0; yeallow <= 3; yeallow++)
		{
			for (green = 0; green <= 6; green++)
			{
				if (red + yeallow + green == 8)
				{
					printf("%d       %d       %d\n", red, yeallow, green);
				}
			}
		}
	}
	system("pause");
	return 0;
}