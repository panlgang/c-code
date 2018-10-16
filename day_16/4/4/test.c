//4. 编写一个函数reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中
//的字符串操作函数。
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char p[])
{
	if (*p != 0)
		reverse_string(p+1);
	printf("%c", *(p-1));
}
int main()
{
	char *str = "abcdef";
	printf("%s\n", str);
	reverse_string(str);
	system("pause");
	return 0;
}