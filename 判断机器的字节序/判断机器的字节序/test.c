#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int check_sys()
{
	int a = 1;
	return *(char*)&a;     // 取地址默认取最低字节地址。将整型地址强制转换为char*类型		                  
	                        //再进行解引用，即取得最低字节里面的内容，如果是1，则是小端，0则大端。
}
int main()
{
	int ret = 0;
	ret = check_sys();
	if (1 == ret)
	{
		printf("小端模式\n");
	}
	else if (0==ret)
	{
		printf("大端模式\n");
	}
	system("pause");
	return 0;
}