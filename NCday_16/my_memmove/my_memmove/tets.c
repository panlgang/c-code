#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t count)
{
	char* d = (char*)dest;      
	char* s = (char*)src;
	assert(dest);           //判断指针是否为空
	assert(src);
	if (d > s&&d < s + count)//内存重叠，从后向前拷贝
	{
		d = d + count - 1;
		s = s + count - 1;
		while (count--)
		{
			*d-- = *s--;
		}
	}
	else            //内存不重叠，从前往后拷贝
	{
		while (count--)
		{
			*d++ = *s++;
		}
	}
	return dest;
}
int main()
{
	char p[10] = "hehe";
	my_memmove(p + 2, p, 4);
	printf("%s\n", p+2);
	system("pause");
	return 0;
}