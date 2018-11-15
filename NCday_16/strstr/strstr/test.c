#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strstr(const char* str1, const char*str2)
{
	char* pst1 = (char*)str1;
	char* pst2 = (char*)str2;
	assert(str1);
	assert(str2);
	while (*str1)
	{
		pst1 = (char*)str1;
		pst2 = (char*)str2;
		while (*pst1 == *pst2)
		{
			pst1++;
			pst2++;
		}
		if (*pst2 == '\0')
			return (char*)str1;
		else
			str1++;
	}
	return NULL;
}
int main()
{
	char* str1 = "hsiucnbydsbjaushecsbj";
	char* str2 = "sbj";
	printf("%s\n", my_strstr(str1, str2));
	system("pause");
	return 0;
}