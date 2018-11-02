#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
void rotate_1(char* arr, int len)  //取出第一个，依次向前移位，将第一个赋给最后一个。
{
	int i = 0;
	char tmp = arr[0];
	for (i = 0; i < len - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[len - 1] = tmp;
}
void reverse(char* left,char* right)   //三次逆序
{
	assert(left);
	assert(right);
	while (left < right)
	{
		*left ^= *right;
		*right ^= *left;
		*left ^= *right;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "ABCDEF";
	int n = 0;
	int len = strlen(arr);
	scanf("%d", &n);
	reverse(arr, arr + n - 1);
	reverse(arr+n, arr + len - 1);
	reverse(arr, arr + len - 1);
	printf("%s\n", arr);
	system("pause");
	return 0;
}