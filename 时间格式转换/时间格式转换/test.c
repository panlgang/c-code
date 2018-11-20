#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
int format_time(char* str, char* out)
{
	assert(str);
	assert(out);
	if (strlen(str) != 19)
		return -1;
	while (*str)
	{
		if (*str == '-' || *str == ':' || *str == ',')
		{
			str++;
		}
		else
		{
			*out++ = *str++;
		}
	}
	*out = 'Z';
}
int main()
{
	char str[20] = {0};
	char arr[16] = { 0 };;
	int ret = 0;
	scanf("%s", str);
	ret=format_time(str, arr);
	if (ret < 0)
	{
		printf("Error\n");
	}
	else
	printf("%s\n", arr);
	system("pause");
	return 0;
}