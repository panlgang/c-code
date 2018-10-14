#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
//递归实现 
int my_strlen(char arr[])
{
	if (*arr == '\0')
		return 0;
	else
		return 1 + my_strlen(arr + 1);

}
//非递归实现
int my_strlen2(char* p)
{
	int count=0;
	while (*p++ != '\0')//*p++等价于*(p++),先执行*p,然后执行p++;
	{
		count++;
		/*p++;*/
	}
	return count;
}
int main()
{
	int ret = 0;
	char arr[] = "hello,world";
	ret = my_strlen(arr);
	printf("%d\n", ret);
	ret = my_strlen2(arr);
	printf("%d\n", ret);
	system("pause");
	return 0;
}