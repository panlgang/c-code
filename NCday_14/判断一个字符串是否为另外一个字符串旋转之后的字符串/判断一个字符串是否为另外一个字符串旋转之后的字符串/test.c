#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rotate(char* arr, int len)   //首元素保留，其余依次左移，将首元素的值赋给最后一个元素
{
	int i = 0;
	char tmp = arr[0];
	for (i = 0; i < len - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[len - 1] = tmp;
}
int judge(char* ch, char* str, int len) 
{
	int n = len;
	while (n)              //旋转的周期为len，即旋转len+1次就是旋转一次
	{                        //将原字符串旋转len次，遍历所有可能，在此过程中如果两者相等则“是”，否则“不是”。
		rotate(ch, len);
		if (0 == strcmp(ch, str))
			return 1;
		n--;
	}
	return 0;
}
int main()
{
	char ch[] = "ABCDEF";
	char str[] = "CDEFAB";
	int len = sizeof(ch)-1;
	int ret = 0;
	ret = judge(ch, str, len);
	if (1 == ret)
	{
		printf("是\n");
	}
	else
		printf("不是\n");
	system("pause");
	return 0;
}