#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void* my_memcpy(void* str1, const void* str2, size_t count)
{
	char*p = (char*)str1;
	char*q = (char*)str2;
	assert(str1);
	assert(str2);
	while (count--)
	{
		*p++ = *q++;
	}
	return str1;
}
int main()
{
	char str1[20] = { 0 };
	char*p = "hello";
	char* ret=my_memcpy(str1, p, 1);
	printf("%s\n", ret);
	system("pause");
	return 0;
}