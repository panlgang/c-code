//一组数据，除了一个元素出现了一次外，其他元素都出现了三次
//找出这个只出现一次的元素
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int find_diff(int* arr, int len)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int ret = 0;
	int tmp[32] = { 0 };
	for (i = 0; i < 32; i++)
	{
		for (j = 0; j < len; j++)  //各个数的同一个比特位加起来
		{
			tmp[i] += ((arr[j] >> i) & 1); //加起来模3，得到的结果，就是所求数该比特位的值，
		}
		ret += (tmp[i] % 3) << i;   //然后将这个数算出来
		
	}
	return ret;
}
int main()
{
	int arr[22] = { 13, 3, 4, 6, 54, 43, 32, 9, 13, 3, 4, 6, 54, 43, 32, 13, 3, 4, 6, 54, 43, 32 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret=find_diff(arr, len);
	printf("%d\n", ret);
	system("pause");
	return 0;
}