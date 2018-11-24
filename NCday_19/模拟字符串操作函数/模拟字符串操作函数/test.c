#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
int my_strncmp(char* dest, char* sor, int len)
{
	assert(dest);
	assert(sor);
	while (len--)
	{
		if (*dest > *sor)
			return 1;
		else if (*dest < *sor)
			return -1;
		else
		{
			dest++;
			sor++;
		}
	}
	return 0;
}
//char* my_strncat(char* dest, char* sor, int len)
//{
//	char* dest_ = dest;
//	assert(dest);
//	assert(sor);
//	while (*dest_!='\0')
//	{
//		dest_++;
//	}
//	while (len--)
//	{
//		*dest_++ = *sor++;
//	}
//	return dest;
//}
//char* my_strncpy(char* dest, char* sor, int len)
//{
//	char* dest_ = dest;
//	assert(dest);
//	assert(sor);
//	while (len--)
//	{
//		*dest++ = *sor++;
//	}
//	return dest_;
//}
int main()
{
	char str[20] = "abcdefghk";
	char str_[20] = "abcdefgh";
	printf("%d\n", my_strncmp(str, str_, 10));
	printf("%d\n", strncmp(str, str_, 10));

	system("pause");
	return 0;
}