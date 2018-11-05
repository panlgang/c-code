#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	double pi_1=1.0;
	double pi_2=1.0;
	double PI=1.0;
	for (i = 1; i < 1000000; i=i+2)
	{
		pi_1 *= (i + 1)*1.0 / i;
	}
	for (i = 2; i < 1000000; i = i + 2)
	{
		pi_2 *= i*1.0 / (i + 1);
	}
	PI = 2 * pi_1*pi_2;
	printf("%lf\n", PI);

	system("pause");
	return 0;
}