#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
void reverse(char* left,char* right)   //Èý´ÎÄæÐò
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
	char arr[] = "ABCDEFGH";
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