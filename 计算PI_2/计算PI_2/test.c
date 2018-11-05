#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double PI = 0.0;
	int i = 0;
	int j = -1;
	for (i = 1; i <= 1000000000; i++)
	{
		PI +=pow(j,i+1)*(1.0 / (2 * i - 1));
	}
	printf("%lf\n", 4 * PI);
	system("pause");
	return 0;
}
