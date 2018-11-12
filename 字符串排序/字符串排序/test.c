#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
void show(char**arr, int sz)
{
	assert(arr);
	int i = 0;
	for (; i < sz; i++)
	{
		printf("%s ", *(arr + i));
	}
	printf("\n");

}
void swap(void* x, void* y, int sz)//常量区的字符串内容没有改变，只是将指向它们的地址进行了更换
{
	char* a = (char*)x;
	char* b = (char*)y;
	for (int i = 0; i < sz; i++)
	{
		a[i] ^= b[i];
		b[i] ^= a[i];
		a[i] ^= b[i];
	}
}
int compare_str(const void* x, const void* y)
{
	return strcmp(*(char**)x, *(char**)y);
}
int compare_int(const void* x, const void* y)
{
	return(*(int*)x > *(int*)y);
}
void my_qsort(void* arr, int num, int sz, int(*compare)(const void* x, const void* y))
{
	assert(compare);
	int i = 0;
	int j = 0;
	int flag = 0;
	char* p = (char*)arr;
	for (; i < num; i++)
	{
		for (j = 0; j < num - 1 - i; j++)//注意j==0必须写
		{
			if (compare_str((p+j*sz), p+(j+1)*sz)>0)
			{
				swap(((p + j*sz)), ((p+(j+1)*sz)), sz);
				
			}
		}
	}
}
int main()
{
	char* arr[] = { "ffff", "bbbb", "cccc", "aaaa", "eeee" };
	//int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	show(arr, sz);
	my_qsort(arr, sz, sizeof(char*), compare_str);
	show(arr, sz);
	//for (int i = 0; i < sz; i++)输出整型
	//{
	//	printf("%d ", arr[i]);
	//}
	printf("\n");
	system("pause");
	return 0;
}
