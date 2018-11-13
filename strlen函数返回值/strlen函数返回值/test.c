#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char* str1 = "abcs";
	char* str2 = "12345";
	if ((strlen(str1) - strlen(str2))>0)//strlen函数的返回值为无符号整型，因此这个值将恒大于等于0，故这个表达式恒成立
	{
		printf("str1>str2\n");
	}
	else
		printf("str2>str1\n");
	system("pause");
	return 0;

}