#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char arr[20] = "abc,def;ghi.gk.lmn";
	char* p = strtok(arr, ",;..");
	while (p != NULL)
	{
		printf("%s", p);
		p = strtok(NULL, ",;..");
	}
	printf("\n");
	system("pause");
	return 0;
}