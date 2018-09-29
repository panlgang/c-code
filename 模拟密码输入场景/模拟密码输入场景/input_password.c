#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char arr[20] = "123456";
	int i = 0;
	char arr2[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", arr2);
		if (0 == strcmp("123456", arr2))
		{
			printf("密码正确！\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入：\n");

		}
	}
	if (i >= 3)
	{
		printf("三次输入密码错误，程序结束\n");
	}
	system("pause");
	return 0;
}