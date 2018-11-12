#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void swap(void* x, void* y, int sz)
{
	/*char* a = (char*)x;
	char* b = (char*)y;
	while (sz)
	{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
	a++, b++;
	sz--;

	}*/
	int i = 0;
	for (; i < sz; i++)
	{
		(*(char*)x) ^= (*(char*)y);
		(*(char*)y) ^= (*(char*)x);
		(*(char*)x) ^= (*(char*)y);
		((char*)x)++;
		((char*)y)++;
	}
}
void my_qsort(void* arr, int num, int sz, int(*compare)(const void* x, const void* y))
{
	assert(arr);
	assert(compare);
	int i = 0;
	int j = 0;
	int flag = 0;
	char* p = (char*)arr;
	for (; i < num; i++)
	{
		for (j = 0; j < num - 1 - i; j++)//×¢Òâj==0±ØÐëÐ´
		{
			if (compare(p + j*sz, p + (j + 1)*sz)>0)
			{
				swap(p + j*sz, p + (j + 1)*sz, sz);
				//flag = 1;
			}
		}
		//if (flag == 0)
		//	break;
	}
}
void show(int *arr, int sz)
{
	assert(arr);
	int i = 0;
	for (; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

}
int compare(const void* x, const void* y)
{
	int* a = (int*)x;
	int* b = (int*)y;
	if (*a > *b)
		return 1;
	else if (*a < *b)
		return -1;
	else
		return 0;
}
int main()
{
	int arr[] = { 1, 2, 3, 22, 56, 87, 32, 54, 89, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	show(arr, sz);
	my_qsort(arr, sz, sizeof(int), compare);
	show(arr, sz);
	system("pause");
	return 0;
}
