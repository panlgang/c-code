#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strcat(char* str,const char* p)
{
	assert(str);
	assert(p);
	char* ptr = str;
	while (*p)
	{
		if (*str == '\0')
		{
			while (*str++ = *p++)
			{
				;
			}	
		}
		else
		    str++;
	}
	return ptr;
}
int main()
{
	char* p = "hello,bit";
	char str[20] = "good";
	my_strcat(str, p);
	printf("%s\n", str);
	system("pause");
	return 0;
}