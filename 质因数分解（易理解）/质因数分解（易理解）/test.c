#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int is_prime(int n)
{
	int i = 0;
	for (i = 2; i <n; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;

}
int main()
{
	int num = 0;
	int flag = 0;
	int i = 2;
	scanf("%d", &num);
	while (is_prime(num) == 0)
	{
		if (num%i == 0)
		{
			printf("%d ", i);
			num = num / i;    //除到它为一个素数为止
		}
		else
			i++;
	}
	printf("%d\n", num);
	system("pause");
	return 0;
}
//int main()
//{
//	int num = 0;
//	int i = 2;
//	scanf("%d", &num);
//	while (num>1)
//	{
//		if (num%i == 0)
//		{
//			printf("%d ", i);
//			num /= i;
//		}
//		else
//           i++;
//		
//	}
//
//	system("pause");
//	return 0;