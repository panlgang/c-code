#define _CRT_SECURE_NO_WARNINGS 2
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
char* my_strchr(const char*str, int num)
{
	assert(str);
	char* pst = (char*)str;
	while (*pst)
	{
		if ((int)*pst == num)
			return pst;
		else
			pst++;
	}
	return NULL;
}
int main()
{
	char str[] = "dbhbfycsannsejsnuen";
	char ch = 'b';
	printf("%s\n", my_strchr(str, ch));
	system("pause");
	return 0;
}