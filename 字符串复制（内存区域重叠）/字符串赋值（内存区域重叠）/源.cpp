#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
char* strcpy_plus(char* dest, char* src)
{
	char* d = dest;
	char* s = src;
	int count = strlen(src) + 1;
	assert(dest);
	assert(src);
	if (d == s)
	{
		return src;
	}
	else if (d<src || d>=src + count)
	{
		while (count--)
		{
			*d++ = *s++;
		}
	}
	else          //dest在src和src+count中间
	{
		d = dest + count;
		s = src + count;
		while (count--)
		{
			*d-- = *s--;
		}
	}
	return dest;
}
int main()
{
	char str1[20];
	char str2[5] = "hehe";
	strcpy_plus(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}