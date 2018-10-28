#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_strlen(const char* p)
{
	int count = 0;
	assert(p);
	while (*p++)
	{
		count++;
	}
	return count;
}
void reverse_str(char* start,char* end)
{
	assert(start);
	assert(end);
	while (start < end)//如果写成 (start++ < end--)在进入循环里内部的时候，已经在交换第二组
	{
		char ch =*start;
		*start = *end;
		*end = ch;
		start++;
		end--;
	}
}
void reverse(char* str)
{
	assert(str);
	int len = my_strlen(str) - 1;
	reverse_str(str, (str , str+len));
	while (*str)
	{
		char* p = str;
		while ((*str != ' ') && (*str!='\0'))
		{
			str++;
		}
		reverse_str(p, str-1);
		if (*str == ' ')
		{
			str++;
		}
	}
}
int main()
{
	char str[] = "student a am i";//若写成char* str = "student a am i"，该字符串分配在静态存储区、
	reverse(str);                //字符串常量的值不能被改变，若要改变应定义为字符串数组
	printf("%s\n", str);
	system("pause");
	return 0;
}