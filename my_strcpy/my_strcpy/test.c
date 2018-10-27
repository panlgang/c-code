#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char * my_strcpy(char* dest, const char* src)//加const可以有效防止源字符串被改动
{                                            //定义为char*类型可以实现链式访问（链式表达式）
	char* p = dest;
	assert(dest);          //指针的合法性检查
	assert(src );          //指针的合法性检查
	if (dest == src)
	{
		return src;
	}
	while (*p++ = *src++)
	{
		;
	}
	return dest;
}
int main()
{
	char arr[20] = { 0 };
	char *str = "hello world";
	printf("%s\n", my_strcpy(str, str));
	system("pause");
	return 0;
}