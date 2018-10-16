//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int DigitSum(int n)
{
	static int sum = 0;//若定义 int sum=0；每次递归sum的值都会被重新赋为0，结果错误。
	if (n > 9)
		DigitSum(n/10);
	sum += (n % 10);
	return sum;

}
int main()
{
	int num = 0;
	int ret = 0;
	scanf("%d", &num);
	ret = DigitSum(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}