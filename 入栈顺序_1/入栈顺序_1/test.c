#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void print(int a, int b, int c)   //自右向左压栈，c先入栈,c在栈底，a最后入栈，在栈顶
{
	printf("&a=%p\n", &a);
	printf("&b=%p\n", &b);
	printf("&c=%p\n", &c);
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	print(a, b, c);
	printf("&a=%p\n", &a);//局部变量入栈顺序，先定义的先入栈 ，a在栈底地址最高
	printf("&b=%p\n", &b);
	printf("&c=%p\n", &c);
	system("pause");
	return 0;
}