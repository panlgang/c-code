#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int find_char(char* str, char ch)
{
	assert(str);
	while (*str != '\0')
	{
		if (*str++ == ch)
			return 1;
	}
	return 0;
}
int main()
{
	int ret = 0;
	char* str = "hello world";
	ret = find_char(str, 'w');
	if (ret)
	{
		printf("找到了\n");
	}
	else
		printf("找不到\n");
	system("pause");
	return 0;
}