#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0; 
	int c = 0;
	int d = 0;
	for (a = 1; a< 5; a++)
	{
		for (b = 1; b < 5; b++)
		{
			for (c = 0; c < 5; c++)
			{
				for (d = 0; d < 5; d++)
				{
					if ((((a == 1) + (b == 4) + (c == 3)) == 1) &&
						(((b == 1) + (a == 4) + (c == 2) + (d == 3)) == 1) &&
						(((b == 4) + (a == 3)) == 1) &&
						(((c == 1) + (d == 4) + (b == 2) + (a == 3)) == 1))
					{
						if (((a != b) && (a != c) && (a != d)) &&
							(b != c) && (b != d) &&
							(c != d))
						{
							printf("%d%d%d%d", a, b, c, d);
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}