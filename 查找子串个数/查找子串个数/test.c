#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int substr_count(const char* str, char* sub)
{
	assert(str);    //对输入参数的有效性进行检查
	assert(sub);    //对输入参数的有效性进行检查
	int count = 0;
	const char* s1 = NULL;
	char* s2 = NULL;
	while (*str != '\0')
	{
		s1 = str;
		s2 = sub;//s2必须重新指向子串的开头，因为在一次循环中s2已经指向了子串！
		while ((*s2 == *s1)&&(*s2 != '\0'))//子串的末尾为\0
		{
			s2++;
			s1++;
		}
		if (*s2 == '\0')// \0作为判断标志,*s2==\0的话说明前面一直吻合
		{
			count++;
		}
		str++;    //逐次比较每一个字符
	}
	return count;
}
int main()
{
	char *str = "hhello hshbyewycb hcbsy hello byBBbx HELLO BYBh hello hsbyb hello";
	char *sub = "hello";
	int ret = 0;
	ret=substr_count(str, sub);
	printf("%d\n", ret);
	system("pause");
	return 0;
}