#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int my_strcmp(char* p, char* q)
{
	while ((*p != NULL)&&(*q != NULL))
	{
		if ((*p++) > (*q++))
		{
			return 1;
		}
		else
			return 0;
	}
	if ((*p == NULL) && (*q != NULL))
	{
		return 1;
	}
	else if ((*p != NULL) && (*q == NULL))
	{
		return 0;
	}
		
}
int main()
{
	char* a = "hello world";
	char* b = "nihao";
	int ret = 0;
	ret = my_strcmp(a, b);
	if (ret)
	{
		printf("The largest is %s\n", a);
	}
	else
		printf("The largest is %s\n", b);
	system("pause");
	return 0;
}