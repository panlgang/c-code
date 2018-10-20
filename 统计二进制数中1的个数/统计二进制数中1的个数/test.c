#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int count_one_bits_3(unsigned int num)
{
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)//最低位等于1时
		{
			count++;
		}
		num /= 2;
	}
	return count;
}
int count_one_bits_2(unsigned int num)
{
	int count = 0;
	while (num)
	{
		if (num & 1==1)
		{
			count++;
		}
		num >>= 1;
		
	}
	return count;
}
int count_one_bits_1(unsigned  num)
{
	int count = 0;
	while (num)
	{
		num = num&(num - 1);// num & (num - 1) 后，都会将x的二进制位中为1的最低位的值变为0，并记数加1
		count++;
	}
	return count;
}
int main()
{
	unsigned num = 0;
	int ret = 0;
	scanf("%d", &num);
	ret=count_one_bits_1(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}