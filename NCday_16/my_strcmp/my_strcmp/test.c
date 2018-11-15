#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	unsigned ret=rand();
	char* pst = NULL;
	assert(str1);
	assert(str2);
	pst = strlen(str1) > strlen(str2) ? str1 : str2;
	while (*pst)
	{
		if (*str1 > *str2)
		{
			return ret;
		}
		else if (*str1 == *str2)
		{
			str1++;
			str2++;
			pst++;
		}
		else
			return -(int)ret;
	}
	return 0;
}
int main()
{
	char* str1 = "ahah";
	char* str2 = "aaha";
	int ret = my_strcmp(str1, str2);
	printf("%d\n", ret);
	if (ret > 0)
	{
		printf("str1>str2\n");
	}
	else if (ret == 0)
	{
		printf("stsr1==str2\n");
	}
	else
		printf("str1<str2\n");
	system("pause");
	return 0;
}