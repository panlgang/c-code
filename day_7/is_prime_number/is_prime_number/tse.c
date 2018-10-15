#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int is_prime(int num)
{
	int i = 0;
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int num = 0;
	int ret = 0;
	printf("请输入要判断的数字num=");
	scanf("%d", &num);
	ret = is_prime(num);
	/*printf("%d", ret);*/
	if (ret==1)
	{
		printf("%d is a prime number\n", num);
	}
	else
	{
		printf("%d is not a prime number\n", num);

	}
	system("pause");
	return 0;
}