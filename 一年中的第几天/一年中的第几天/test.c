#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int Day(int year, int m, int day)
{
	int month[13] = { 0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i = 0;
	int count = 0;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 4000)==0)
	{
		month[2] = 29;
	}
	else
	{
		month[2] = 28;
	}
	for (i = 0; i < m; i++)
	{
		count += month[i];
	}
	count += day;
	return count;
}
int main()
{
	
	int year = 0;
	int month = 0;
	int day = 0;
	int ret = 0;
	scanf("%d%d%d", &year,&month,&day);
	ret = Day(year, month, day);
	printf("%d年%d月%d%日是%d年的第%d天\n", year,month,day,year,ret);
	system("pause");
	return 0;
}