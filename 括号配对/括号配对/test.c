#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch = 0;
	int count = 0;
	while ((ch = getchar()) != EOF)
	{
		if ((ch == '}') && (count <= 0))
		{
			printf("not matched\n");
			system("pause");
			return 0;
		}
		else if (ch == '{')
			count++;
		else if (ch == '}')
			count--;
	}
	if (count == 0)
	{
		printf("matched\n");
	}
	else
	{
		printf("not matched\n");
	}
	system("pause");
	return 0;
}