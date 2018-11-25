#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<errno.h>
#include<assert.h>
#include <stdio.h>
struct Stu
{
	int a;
	int arr[];
};
int main()
{
	struct Stu *st = (struct Stu*)malloc(sizeof(struct Stu) + 10 * sizeof(int));
	if (st != NULL)
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			st->arr[i] = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", st->arr[i]);
		}
		printf("\n");
		free(st);
	}
	system("pause");
	return 0;
}
//int main()
//{
//	printf("%s\n", strerror(errno));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(10 , sizeof(int));//动态开辟40个字节的内存
//	int* q = NULL;
//	if (NULL == p)  //判空
//	{
//		printf("p: Error");
//		exit(1);
//	}
//	*q = realloc(p, 100 * sizeof(int));
//	if (NULL == q)  //判空
//	{
//		printf("q: Error");
//		exit(1);
//	}
//	else
//	{
//		p = q;
//	}	
//	free(p);   //释放内存
//	p = NULL;  //置空
//	system("pause");
//	return 0;
//}
//char* test()
//{
//	char a[] = "hello,world";
//	return a;
//}
//int main()
//{
//	char* q = test();
//	printf("%s\n", q);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(sizeof(int));
//	if (p == NULL)
//	exit(-1);
//	int* q = realloc(p,sizeof(int));
//	printf("%p\n", p);
//	printf("%p\n", q);
//	//free(p);
//	//free(q);
//	system("pause");
//	return 0;
//}
//int Sum(int n)
//{
//	int i = 0;
//	int s = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		s += i;
//		sum += s;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Sum(n));
//	system("pause");
//	return 0;
//
//}
//int my_strncmp(char* dest, char* sor, int len)
//{
//	assert(dest);
//	assert(sor);
//	while (len--)
//	{
//		if (*dest > *sor)
//			return 1;
//		else if (*dest < *sor)
//			return -1;
//		else
//		{
//			dest++;
//			sor++;
//		}
//	}
//	return 0;
//}
//char* my_strncat(char* dest, char* sor, int len)
//{
//	char* dest_ = dest;
//	assert(dest);
//	assert(sor);
//	while (*dest_!='\0')
//	{
//		dest_++;
//	}
//	while (len--)
//	{
//		*dest_++ = *sor++;
//	}
//	return dest;
//}
//char* my_strncpy(char* dest, char* sor, int len)
//{
//	char* dest_ = dest;
//	assert(dest);
//	assert(sor);
//	while (len--)
//	{
//		*dest++ = *sor++;
//	}
//	return dest_;
//}
//int main()
//{
//	int* p = (int *)malloc(1024 * 1024*1026 );
//	if (p == NULL)
//	{
//		printf("Error\n");
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n, m, i, f, t, x, r = 0;
//	scanf("%d,%d", &n, &m);
//	for (i = n; i <= m; i++)
//	{
//		f = i;
//		t = 0;
//		for (x = 1; x<f; x++)        {
//			if (f%x == 0)
//				t = t + x;
//		}
//		if (t == f)
//			r = r + 1;
//	}
//	printf("%d\n", r);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	FILE* pfile;
//	pfile = fopen("unexist.ent", "r");
//	if (pfile == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//char arr[20] = "abc,abc:cde?efg";
//	//char* p=NULL;
//	//for (p = strtok(arr, ",:?"); p; p = strtok(NULL, ",:?"))
//	//{
//	//	printf("%s", p);
//	//}
//	//printf("\n");
//	int i = 0;
//	for (i = 0; i < 100;i++)
//	printf("%s\n", strerror(i));
//	system("pause");
//	return 0;
//}
//#pragma pack(1)
//#pragma pack()
//struct A
//{
//	char a;
//	int b;
//	char c;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	system("pause");
//	return 0;
//}
//{
//	int a = 0;
//	int b = 0;
//	printf("%d\n", sizeof (b=a+1));
//	printf("b=%d\n", b);
//
//	system("pause");
//	return 0;
//}
////int fun()
//{
//	static int  num;
//	num++;
//	printf("%d ", num);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		fun();
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//struct A
//{
//	int b;
//	char c;
//};
//int main()
//{
//
//	int n = 0;
//	int num = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d", &num);
//		if (num % 2 == 1)
//		{
//			sum *= num;
//		}
//	}
//	printf("奇数乘积sum=%d\n", sum);
//	system("pause");
//	return 0;
//}
//struct A
//{
//	char a;
//	int b;
//	char c;
//};
//int main()
//{
//	struct A A_;
//	printf("%d\n", sizeof(A_));
//	printf("%d\n", sizeof(struct A));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof((*main)));
//	system("pause");
//	return 0;
//}
//void fun(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*pfun)(char*) = fun;            //pfun是函数指针
//	void(*pfun_arr[])(char*) = { pfun }; //pfun_arr函数指针数组
//	void(*()[])(char*) = &pfun_arr;//ppfun_arr函数指针数组指针
//	system("pause");
//	void(*()[])(char*)
//	return 0;
//	
//}
//void show(char** arr, int len)
//{
//	int i = 0;
//	for (i =0 ; i < len; i++)
//	{
//		printf("%s  ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_str(const void* str1, const void* str2)
//{
//	return (strcmp(*( char**)str1, *( char**)str2));
//}
//void swap(void* x, void* y,int width)
//{
//	char* p = (char*)x;
//	char* q = (char*)y;
//	while (width--)
//	{
//		(*p) ^= (*q);
//		(*q) ^= (*p);
//		(*p) ^= (*q);
//		p++, q++;
//	}
//}
//
//void my_qsort(void* arr, int len, int sz, int cmp_str(const void*,const void*))
//{
//	int i = 0;
//	int j = 0;
//	char*p = (char*)arr;
//	for (i = 0; i < len; i++)
//	{
//		for (j = 0; j < len - i - 1; j++)
//		{
//			if (cmp_str((p + j*sz), p + (j + 1)*sz)>0)
//			{
//				swap(((p + j*sz)), ((p + (j + 1)*sz)), sz);
//
//			}
//		}
//	}
//}
//int main()
//{
//	char* arr[5] = { "abcd", "lmnop", "efghijk", "qrstuvw","xyz" };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("排序前：");
//	show(arr, len);
//	my_qsort(arr,len,sizeof(char*),cmp_str);
//	printf("排序后：");
//	show(arr, len);
//	system("pause");
//	return 0;
//}
//void show(int* arr, int len)    
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* x, const void* y) 
//{
//	return *(int*)x>*(int*)y;
//}
//int main()
//{
//	int arr[10] = { 3, 5, 2, 5, 7, 8, 4, 8, 1, 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	show(arr,len);
//	qsort(arr, len, sizeof(int), cmp_int);
//	show(arr, len);
//	system("pause");
//	return 0;
//}
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	 test();
//	(*test)();
//	(&test)();
//	system("pause");
//	return 0;
//}
//void func(int num)
//{
//	if (num > 1)
//	{
//		func(num / 2);
//	}
//	printf("%d ",num%2);
//}
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		scanf("%d", &num);
//		if (num > 0)
//			break;
//		else
//			;
//	}
//	func(num);
//	system("pause");
//	return 0;
//}
//void func(int num)
//{
//	int i = 0;
//	if (num<10 && num>0)
//	{
//		for (i = 1; i <= 9; i++)
//		{
//			printf("%2d * %2d = %3d\n", num, i, i*num);
//		}
//	}
//	else if (num > 10)
//	{
//		for (i = 1; i <= num; i++)
//		{
//			printf("%2d * %2d = %3d\n", num, i, i*num);
//		}
//	}
//
//	
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	func(num);
//	system("pause");
//	return 0;
//}
//int operation(int num1, int num2)
//{
//	int sum = 1;
//	while (num1<=num2)
//	{
//		sum *= num1;
//		num1++;
//	}
//	return sum;
//}
//int main()
//{
//	int num1 =0 ;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	printf("%d\n", operation(num1, num2));
//	system("pause");
//	return 0;
//}
//int get_bit(int num)
//{
//	if (num > 9)
//	{
//		return 1 + get_bit(num / 10);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d是%d位数\n",num ,get_bit(num));
//	system("pause");
//	return 0;
//}
//typedef struct Node
//{
//	 int arr;
//	 struct Node* next;
//} Node;
//int main()
//{
//	Node std;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[3][3];
//	int i = 0;
//	int j = 0;
//	memset(arr, '#', 9);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf(" %c ", arr[i][j]);
//			printf("|");
//		}
//		printf("\n");
//		for (j = 0; j < 3; j++)
//		{
//			printf("--- ");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	int ret = 0;
//	while ((!(ret=(*(unsigned char*)str1) - (*(unsigned char*)str2))) && (*str1))
//	{
//		str1++, str2++;
//	}
//	if (ret < 0)
//		ret = -1;
//	else if (ret>0)
//		ret = 1;
//	return ret;
//}
//int main()
//{
//	char*p = "hello";
//	char*q = "hehe";
//	int ret = my_strcmp(p,q);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[20] = "abcd1234";
//	strcpy(arr, arr+1);
//	printf("%s\n", arr + 1);
//	system("pause");
//	return 0;
//}
//void find_differ(int* p, int* q, int arr[], int len)
//{
//	int i = 0;
//	int ret = arr[0];
//	int bit = 0;
//	*p = 0;
//	*q = 0;
//	for (i = 1; i < len; i++)
//	{
//		ret ^= arr[i];
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if ((ret >> i) & 1 == 1)
//		{
//			bit = i;
//			break;
//		}
//			
//	}
//	for (i = 0; i < len; i++)
//	{
//		if ((arr[i] >> bit) & 1 == 1)
//		{
//			(*p) ^= arr[i];
//		}
//	}
//	*q = *p^ret;
//
//}
//int main()
//{
//	int arr[] = { 1,1,2,2,3,3,4,4,5,6};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int num1 = 0;
//	int num2 = 0;
//	find_differ(&num1, &num2, arr, len);
//	printf("%d %d\n", num1, num2);
//	system("pause");
//	return 0;
//}
//int main()222
//{
//	char str[5];
//	printf("%d\n", printf("%s\n","abc"));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[] = {1,6,4,0,7,0,5,0,3,1,4};
//	for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//    system("pause");
//	return  0;
//}
//int main()
//{
//	char str[] = "198,674,987";
//	char str1[] = ",";
//	char* ret = NULL;
//	for (ret = strtok(str, str1); ret != NULL;)
//	{
//		printf("%s ", ret);
//		ret=strtok(NULL, str1);	
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i++ < 5)
//	{
//		;
//	}
//	printf("%d\n", i);
//	printf("\n");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char str[] = "hello bit,hello:world";
//	char*s1 = strtok(str, " ,:");
//	char*s2 = strtok(NULL, " ,:");
//	char*s3 = strtok(NULL, " ,:");
//	char*s4 = strtok(NULL, " ,:");
//	puts(s1);
//	puts(s2);
//	puts(s3);
//	puts(s4);
//	system("pause");
//	return 0;
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	const char* pstr1 =(char*) str1;
//	const char* pstr2 =(char*) str2;
//	while (*str1)
//	{
//		pstr2 = str2;
//		pstr1 = str1;
//		while ((*pstr2 == *pstr1)!='\0')
//		{
//			pstr2++;
//			pstr1++;
//		}
//		if (*pstr2 == '\0')
//		{
//			return str1;
//		}
//		str1++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str[] = "this is a simple string";
//	char* pch;
//	pch = my_strstr(str, "simple");
//	strncpy(pch,"sample", 6);
//	puts(str);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char str[10]="nihao";
//	char arr[5] = "abcd";
//	strcpy(str,arr);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[5] = { 'a', 'b', 'c', 'd' };
//	//printf("%s\n", arr);
//	//strcat(arr, arr);
//	char str[] = "hehehahaxixi";
//	strcpy(str, arr);
//	//printf("%d\n",strlen(arr));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char*a[] = { "work", "at", "home" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	system("pause");
//	return 0;
//}
//void swap(char** p, char** q)
//{
//	char* tmp = *p;
//	*p = *q;
//	*q = tmp;
//}
//int compare(const void* x, const void* y)
//{
//	char* a = (char*)x;
//	char* b = (char*)y;
//	if (strcmp(a, b)>0)
//		return 1;
//	else if (strcmp(a, b)<0)
//		return -1;
//	else
//		return 0;
//}
//int main()
//{
//	char *p = "aello";
//	char *q = "bihao";
//	char* arr[2] = { p, q };
//	int ret=compare(arr[0], arr[1]);
//	/*swap(&p, &q);
//	printf("%s\n", p);
//	printf("%s\n", q);*/
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//void swap(void* x, void* y, int sz)
//{
//	char* a = (char*)x;
//	char* b = (char*)y;
//	char tmp[20] ;
//	char*c = a;
//	char*d = b;
//	strcpy(tmp,a);
//	strcpy(c, b);
//	strcpy(d, tmp);
//}
//int main()
//{
//	char arr[2][5] = { "aaaa", "bbbb" };
//	swap(*arr, *(arr+1), 5);
//	printf("%s\n", arr[1]);
//	printf("%s\n", arr[2]);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	/*char arr[] = "hello,bit";
//	printf("%d\n", strlen(&arr));*/
//	//char* p = "hello,bit";
//	//printf("%p\n", p);
//	//printf("%p\n", p+1);
//	//printf("%p\n", &p);
//	//printf("%p\n", &p+1);
//	int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(*(&a[0]+1)));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", *(a[0] + 1));
//	system("pause");
//	return 0;
//}
//void swap(void* x, void* y,int sz)
//{
//	/*char* a = (char*)x;
//	char* b = (char*)y;
//	while (sz)
//	{
//		*a ^= *b;
//		*b ^= *a;
//		*a ^= *b;
//		a++, b++;
//		sz--;
//
//	}*/
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		(*(char*)x) ^= (*(char*)y);
//		(*(char*)y) ^= (*(char*)x);
//		(*(char*)x) ^= (*(char*)y);
//		((char*)x)++;
//		((char*)y)++;
//	}
//}
//void my_qsort(void* arr, int num, int sz, int(*compare)(const void* x, const void* y))
//{
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	char* p = (char*)arr;
//	for (; i < num; i++)
//	{
//		for ( j=0; j < num - 1 - i; j++)//注意j==0必须写
//		{
//			if (compare(p + j*sz, p + (j+1)*sz)>0)
//			{
//				swap(p + j*sz, p + (j+1)*sz, sz);
//				//flag = 1;
//			}	
//		}
//		//if (flag == 0)
//		//	break;
//	}
//}
//void show(int *arr, int sz)
//{
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//}
//int compare(const void* x, const void* y)
//{
//	int* a = (int*)x;
//	int* b = (int*)y;
//	if (*a > *b)
//		return 1;
//	else if (*a < *b)
//		return -1;
//	else
//		return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3,22,56,87,32,54,89,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	show(arr, sz);
//	my_qsort(arr, sz, sizeof(int), compare);
//	show(arr, sz);
//	system("pause");
//	return 0;
//}
//void show(int *arr, int sz)
//{
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	
//}
//int compare(const void* x, const void* y)
//{
//	if ((*(int *)x)>(*(int *)y))
//		return -1;
//	else if ((*(int *)x) < (*(int *)y))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int arr[] = { 1, 3, 2, 45, 21, 4, 23, 56, 77 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	show(arr, sz);
//	qsort(arr, sz, sizeof(int), compare);
//	show(arr, sz);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10];
//	int *parr[10];
//	int* p =arr;
//	int(*q)[10] =& arr;
//	int*(*par)[10] = &parr;
//	
//
//	system("pause");
//}
//int main()
//{
//	char* p = "hello bit";
//	char q[20] = { 0 };
//	strcpy(q, p);
//	printf("%s\n", q);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 4;
//	printf("%d\n", a & 4 == 1);
//	system("pause");
//	return 0;
//}
//void exchange(int* start, int* end)
//{
//	while (start < end)
//	{
//		while ((((*start) & 1) == 1) && (start<end))//是奇数进入循环
//		{
//			start++;
//		}
//		while ((((*end & 1)) == 0) && (end>start)) //是偶数进入循环
//		{
//			end--;
//		}
//		if (start < end)//进行交换
//		{
//			*start ^= *end;
//			*end ^= *start;
//			*start ^= *end;
//			start++;
//			end--;
//		}
//		
//	}
//}
//void show(int* arr, int len)
//{
//	int i = 0;
//	for (; i < len; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	show(arr, len);
//	exchange(arr, arr+(len-1));
//	show(arr,len);
//	system("pause");
//	return 0;
//}
//void reverse(char* start, char* end)
//{
//	assert(start);
//	assert(start);
//	while (start < end)
//	{
//		*start ^= *end;
//		*end ^= *start;
//		*start ^= *end;
//		start++, end--;
//	}
//}
//void change_str(char* a)
//{
//	assert(a);
//	char* p = a;
//	char* q = a;
//	while (*p)
//	{
//		if (*p == ' ')
//		{
//			reverse(q, p - 1);
//			p++;
//			q = p;
//		}
//		else
//		{
//			p++;
//		}
//	}
//	reverse(q, p - 1);
//	reverse(a, p - 1);
//
//}
//int main()
//{
//	char a[] = "student a am i";
//	int len = strlen(a);
//	change_str(a);
//	printf("%s\n", a);
//	system("pause");
//	return 0;
//}
//void sort(int* arr, int sz)
//{
//	assert(arr);
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				arr[j] ^= arr[j + 1];
//				arr[j + 1] ^= arr[j];
//				arr[j] ^= arr[j + 1];
//			}
//		}
//	}
//}
//int find_diff_num(int* arr, int sz)
//{
//	assert(arr);
//	int i = 0;
//	for (i = 0; i < sz; i+=2)
//	{
//		if (arr[i] != arr[i + 1])
//			return arr[i];
//	}
//	if (i>=sz)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int arr[] = { 2, 5, 7, 82,82, 467, 2, 5, 7, 467 };
//	int ret= 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz); 
//	ret = find_diff_num(arr, sz);
//	if (ret != -1)
//	{
//		printf("%d\n", ret);
//	}
//	else
//		printf("没有这个数\n");
//
//	system("pause");
//	return 0;
//}
//int main()
//{
	//int arr[] = { 1, 2, 3, 4, 5, 7, 8, 1, 2, 3, 4, 5,  7,};//暴力查找法,且不管有多少个数不同都能找出来。
	//int i = 0;
	//int j = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	for (j = 0; (j < sz); j++)
	//	{
	//		if (arr[i] == arr[j] && (i != j))
	//		     break;
	//	}
	//	if (j == sz)
	//	{
	//		printf("唯一不同的数是：%d\n", arr[i]);
	//	}
//		
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	printf("%p\n", main);
//	printf("%p\n", main);
//	system("pause");
//	return 0;
//}
//#define N 10
//int main()
//{
//	int arr[N] = { 0 };
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for ( i = 0; i <N/2; i++)
//	{
//		int t = arr[i];
//		arr[i] = arr[N - i-1];
//		arr[N - i-1] = t;
//	}
//	for (i = 0; i <N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//void add(int* psum, int x, int y)//psum返回性参数
//{
//	*psum = x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	add(&c, a, b);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	int b = -pow(2, 32);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", a + b);
//	system("pause");
//	return 0;
//}
//void print(char(*p)[5], int len)
//{
//
//}
//int main()
//{
//	char* arr[3] = { "hehe", "haha", "xixi" };
//	char str[][5] = { "hehe", "haha", "xixi" };
//	print(str, 5);
//	//print(arr, 3);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[N][N] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < N; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//		if (i >= 2)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N - i-1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	
//	printf("%d %d\n", m,m++);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char c1, c2, c3, c4, c5, c6;
//	scanf("%c%c%c%c", &c1, &c2, &c3, &c4);
//	c5 = getchar();
//	c6 = getchar();
//	putchar(c1);
//	putchar(c2);
//	printf("%c%c\n", c5, c6);
//	printf("%c\n", c6);
//	system("pause");
//	return 0;
//}
//int find_char(char(*strings)[20], char ch)
//{
//	assert(strings);
//	while (*strings != '\0')
//	{
//		{
//			if (*strings++ == ch)
//			return 1;
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	char str[][20] = { "hello world" };
//	if (find_char(str[1][20], 'w'))
//		printf("找到了\n");
//	else
//		printf("找不到\n");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	char c = 'a', b;
//	printf("%c\n", c);
//	system("pause");
//	return 0;
//}
//void fun()
//{
//	printf("hh");
//
//}
//int main()
//{
//	int num = 1;
//	int n = 2;
//	int i = 0;
//	num=(num <<30) | 1;
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		if ((i % 10 == 7) || (i / 10 == 7)||(i/100==7)||(i/1000==7))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("%d \n", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int num = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		num *= i;
//		sum += num;
//	}
//	
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//int is_prime(int num)
//{
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i < 10; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j,i,j*i);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//void insert_sort(int *a, int len)
//{
//	int i = 0;
//	int j = 0;
//	int min = 0;
//	for (i = 1; i < len; i++)
//	{
//		min = a[i];
//		for (j = i; j >= 0 && a[j - 1]>min; j--)
//		{
//			a[j] = a[j - 1];
//		}
//		a[j] = min;
//	}
//}
//int main()
//{
//	int arr[4] = { 4, 2, 3, 1 };
//	insert_sort(arr, 4);
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n", arr[i]);		
//	}
//	system("pause");
//	return 0;
//}
//#include<windows.h>
//void fun(static int a)
//{
//	if (a > 1)
//		fun(a);
//	else
//		a--;
//
//}
//int main()
//{
//	int a = 2;
//	fun(a);
//	system("pause");
//	return  0;
//}
//int main()
//{
//	
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("&i=%p\n", &i);
//	printf("&arr=%p\n", &arr);
//	system("pause");
//	return 0;
//}
//void fun2()
//{
//
//}
//void fun1()
//{
//	fun2();
//}
//int main()
//{
//	fun1();
//	printf("&main=%p\n", main);
//	printf("&fun1=%p\n", fun1);
//	printf("&fun2=%p\n", fun2);
//	system("pause");
//	return 0;
//}                                 //函数参数的入栈顺序：
//void print(int a, int b, int c)   //自右向左压栈，c先入栈,c在栈底，a最后入栈，在栈顶
//{
//	printf("&a=%p\n", &a);
//	printf("&b=%p\n", &b);
//	printf("&c=%p\n", &c);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	print(a, b, c);
//	printf("&a=%p\n", &a);//局部变量入栈顺序，先定义的先入栈 ，a在栈底地址最高
//	printf("&b=%p\n", &b);
//	printf("&c=%p\n", &c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//
//	
//	printf("%d\n", '\0xa');
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	float* p = (float*)&n;
//	printf("n: %d\n",n);
//	printf("*p :%f\n", *p);
//	*p = 9.0;
//	printf("*p==%f\n", *p);
//	printf("n==%d\n", n);
//	system("pause");
//	return  0;
//}
//int main()
//{
//	char arr[1000];
//	int i = 0;
//	for (i = 0; i < 300; i++)
//	{
//		arr[i] = -1 - i;
//		if (arr[i] == 0)
//		{
//			printf("%d\n", i);
//		}
//		//Sleep(300);
//		//printf("%d\n", arr[i]);
//
//	}
//	printf("%d\n", strlen(arr));
//	
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	while (1);
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	while (1);
//	return 0;
//
//}
//void rotate(char* arr, int len)
//{
//	int i = 0;
//	char tmp = arr[0];
//	for (i = 0; i < len - 1; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	arr[len - 1] = tmp;
//}
//int judge(char* ch,char* str, int len)  
//{
//	int n = len;
//	while (n)
//	{
//		if (0 == strcmp(ch, str))
//		{
//			return 1;
//		}
//		rotate(ch, len);
//		n--;
//	}
//	return 0;
//}
//int main()
//{
//	char ch[] = "ABCDEF";
//	char str[] = "DEFABC";
//	int len = sizeof(ch)-1;
//	int ret = 0;
//	ret=judge(ch, str, len );
//	if (1 == ret)
//	{
//		printf("是\n");
//	}
//	else
//		printf("不是\n");
//	system("pause");
//	return 0;
//}
//void rotate(char* arr, int len)
//{
//	int i = 0;
//	char tmp = arr[0];
//	for (i = 0; i < len - 1; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char ch[] = "ABCDEF";
//	int len = sizeof(ch)-1;
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		rotate(ch, len);
//		n--;
//	}
//	printf("%s\n", ch);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	void* p = NULL;
//	int a = 10;
//	char ch = 'a';
//	double q = 9.0;
//	double *f;
//	p = f;
//	p = (int *)a;
//	p = (char *)ch;
//	p = (double *)q;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int b = 1;
//	void* a = &b;
//	printf("%d\n", *(int *)a);
//	printf("%d\n", *(double *)a);
//	printf("%lf\n",(double)b);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	const int *p=&a ;       //常量指针
//	int *const q=&a;        //指针常量
//	
//	printf("%d\n", *p);
//	printf("%d\n", *q);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 0 };
//	//printf("%p %p %p %p %p", arr, arr[0], &arr[0],&arr[0][0],&arr);
//	printf("%p %p\n", arr, arr + 1);//二维数组名代表第一行的地址，加一偏移量等于第一行的元素个数乘以其类型！
//	printf("%p %p\n", &arr,& arr + 1);//数组名取地址，加一，偏移量为整个数组的元素乘以其类型。
//	printf("%p %p\n", arr[0], arr[0] + 1);//第一行第一个元素的地址,加一偏移量为一个元素的大小
//	printf("%p %p\n", &arr[0][0], &arr[0][0] + 1);//第一行第一个元素的地址,加一偏移量为一个元素的大小
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	float* f = (float*)&n;
//	*f = 9.0;
//	printf("%d", n);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char ch = -1;
//	unsigned char cha = ch;
//	int i = 0;
//	while (i<=7)
//	{
//		cha >>= i;
//		printf("%d ", (cha && 1));
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//int factor_sum(n)
//{
//	int sum = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum = sum + i;
//		}
//		
//	}
//	return sum;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		if (i == factor_sum(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int num = 0;
//	int i = 1;
//	scanf("%d", &num);
//	for (i = 1; i < num; i++)
//	{
//		if (num%i == 0)
//		{
//			if (is_prime(i) == 1)
//			{
//				printf("%d ", i);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//
//}
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d", &num);
//	for (i=2; i <= num;)
//	{
//		if (num%i != 0)
//		{
//			i++;
//		}
//		else
//		{
//			printf("%d ", i);
//          num = num / i;
//			i = 2;
//		}
//			
//	}
//
//	system("pause");
//	return 0;
//}
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <n; i++)
//	{
//		if (n%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//
//}
//
//int main()
//{
//	int num = 0;
//	int flag = 0;
//	int i = 2;
//	scanf("%d", &num);
//	while (is_prime(num)==0)
//	{
//		if (num%i == 0)
//		{
//			printf("%d ", i);
//			num = num / i;
//		}
//		else
//			i++;
//	}
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//
//}
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
//}
////int main()
//{
//	char str[3][6] = { "China", "Japan", "Kroea" };
//	str[1][5] = ' ';//将Japan后面的/0改成了空格
//	printf("%s\n", str[1]);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[7] = "abcdef";
//	char b[4] = "ABC";
//	strcpy(a, b);
//	printf("%c\n", a[5]);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	const int  a = 10;
//	int* p = &a;
//	//a = 20;//a被const修饰不能作为左值
//	*p = 20;
//	printf("%d\n", *p);
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	/*char* pt = "hello world";
//	char p[] = "hello world";
//	const char* ptr = "hello world";
//	*p =* ptr;*/
//	const int  y = 10;
//	int* p = NULL;
//	p = &y;
//	*p = 3;
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char* str2 = "hello,world";
//	const char* str1 = "hello";
//	printf("%s\n", str1);
//	system("pause"
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d", i + j);
//	/*char ch1 = 128;
//	signed char ch2 = -1;
//	unsigned char ch3 = 256;
//	printf("%d %d %d", ch1, ch2, ch3);*/
//	system("pause");
//	return 0;
//}
//int main()
//{
//	long long t = sizeof(t);
//	printf("%d\n", t);
//	system("pause");
//	return 0;
//}
//int main(){
//	struct{
//		char name[20];  //姓名
//		int num;  //学号
//		int age;  //年龄
//		char group;  //所在小组
//		float score;  //成绩
//	} stu1;
//	//给结构体成员赋值
//	stu1.name[20] = "Tom";
//	stu1.num = 12;
//	stu1.age = 18;
//	stu1.group = 'A';
//	stu1.score = 136.5;
//	//读取结构体成员的值
//	printf("%s的学号是%d，年龄是%d，在%c组，今年的成绩是%.1f！\n", stu1.name, stu1.num, stu1.age, stu1.group, stu1.score);
//	system("pause");
//	return 0;
//}
//int my_strlen(const char *str)
//{
//	assert(str);
//	int len = 0;
//	while (*str++)
//	{
//		len++;
//	}
//	return len;
//}
//void reverse(char *start, char *end)
//{
//	assert(start);
//	assert(end);
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//}
//void str_reverse(char *str)
//{
//	assert(str);
//	int len = my_strlen(str);
//	reverse(str, str + len - 1);
//	while (*str != '\0')
//	{
//		char *p = str;
//		while ((*str != ' ') && (*str != '\0'))
//		{
//			str++;
//		}
//		reverse(p, str - 1);
//		if (*str != '\0')
//		{
//			str++;
//		}
//	}
//}
//int main()
//{
//	char str[] = "student a am i";
//	str_reverse(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
//void reverse_str(char* start, char* end)
//{
//	assert(start);
//	assert(end);
//	while (start < end)
//	{
//		char ch = *end;
//		*end = *start;
//		*start = ch;
//		start++;
//		end--;
//	}
//}
//int main()
//{
//	char*p = "hello world";
//	reverse_str(p, p + 10);
//	printf("%s", p);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char str[15] = "student a am i";
//	char arr[20] = { 0 };
//	int i = 0;
//	int j = 0;
//	char ch = 0;
//	for (i = 0; i < 14; i++)
//	{
//		if (str[i] == ' ')
//		{
//			for (j = 19; j >= 19 - i; j--,i--)
//			{
//				arr[j] = str[i];
//			}
//		}
//	}
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5 }; 
//	int* p = a;
//	int i = 0;
//	for (i = 4; i > -1; i--)
//	{
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//	p = &a[4];          //p指向了a[4]，p的加减，以a[4]为参照
//	for (i = 4; i > -1; i--)
//	{
//		printf("%d ", p[i]);//第一次循环等价于 p=a[8]
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("%d %d\n", a, a++);//先执行a++,再执行a
//	system("pause");
//	return 0;
//}
//#define SQ(y) ((y)*(y))
//int main()
//{
//	int i = 1;
//	while (i <= 5){
//		printf("%d^2 = %d\n", i, SQ(i++));//顺序从右向左
//	}
//	system("pause");
//	return 0;
//}
//#define MAX(a,b) a>b?a:b  // MAX(a,b)之间不能有空格
//#undef MAX   //限制宏定义的作用域
//int main()
//{
//	int x = 3;
//	int y = 5;
//	printf("%d\n", MAX(x, y));
//	system("pause");
//	return 0;
//
//}
//int a = 10;
//int b = 10 + 20;
//int main()
//{
//	char p[20] = "hello";
//	char* q = "world";
//	strcat(p, q);
//	puts(p);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int i = 1;
//	//int k = (i++) + (i++) + (i++);
//	//printf("%d %d\n", i, k);
//	int a = 2;
//	int b = 5;
//	int r = 0;
//	int max = a > b ? a : b;
//	int min = a < b ? a : b;
//	r = max%min;
//	while (r)
//	{
//		max = min;
//		min = r;
//		r = max%min;
//	}
//	printf("%d", min);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	unsigned char i = 0;
//
//	for (i = 5; i >= 0; i--)
//	{
//		printf("hh\n");
//	}
//
//	system("pause");
//	return 0;
//}
//struct student
//{
//	int a;
//	char c[6];
//	char st[2];
//};
//int main()
//{
//	struct student st1;
//	printf("%d", sizeof(st1));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char *p = "abcde\0f";
//	char a[] = "abcde\0f";
//	int b[] = { 1, 2, 3 };
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(b));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char* p = "china";
//	char* p2 = p;
//	char* p1 = (char*)malloc(20);
//	//memset(p1, 0, 6);
//	char* p3 = p1;
//	while ((*p3++) = (*p++))
//	{
//		;
//	}
//	printf("%s\n", p1);
//	printf("%s\n", p);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%p\n", &a);                // 以00开头的十六进制数
//	printf("0x%x\n", &a);              // 以0x开头的十六进制数
//	system("pause");
//	return 0;
//}
//博客
//int main()
//{
//	char chr = -128;
//	int sum = 100;
//	chr -= 1;
//	sum += chr;
//	printf("%d\n", chr);
//	//printf("%d\n", sum);
//	system("pause");
//	return  0;
//}
//博客
//int main()
//{
//	unsigned char ch = 255;
//	ch += 1;
//	unsigned char chr = 0;
//	chr -= 1;
//	printf("%d\n", ch);
//	printf("%d\n", chr);
//	system("pause");
//	return 0;
//}
//char* fun()
//{
//	char* a = 0;
//	a = (char*)malloc(5);
//	strcpy(a, "ABCDE");
//	//a = "CDE";
//	return a;
//}
//int main()
//{
//	char* b = fun();
//	char* c = fun();
//	printf("%s\n", b);
//	printf("%s\n", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[20] = { 0 };
//	int c = 1;
//	char* p = "hello world";
//	sprintf(a, "%s", p);
//	printf("%s\n", a);
//	c++;
//	printf("%d", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 128;
//	char ch = 0;
//	char ch1 = (char) a;
//	ch = a;
//	printf("%d\n", ch);
//	printf("%c\n", ch);
//	printf("%d\n", ch1);
//	printf("%c\n", ch1);
//	system("pause");
//	return 0;
//}
//int fun()
//{
//	static int  num;
//	num++;
//	printf("%d ", num);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		fun();
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 2, 3, 4, 5 };
//	int arr3[] = { 3, 4, 5, 6 };
//	int* arr[] = { arr1, arr2, arr3 };
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(*(arr+i)+j));
//		}
//		printf("\n");
//		
//	}
//	
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int n = 0;
//	int m = 0;
//	int s = 0;
//	scanf("%d%d", &num, &count);
//	n = count / num;
//	m = count%num;
//	s = m + n;
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char str[30] = "c.biancheng.net";
//	char* p = "c.biancheng.net";
//	p++;
//	puts(p);
//	puts(str);//puts输出字符串时，自动换行！
//	system("pause");
//	//str++;  strs是数组名，是一个常量指针 
//	return 0;
//}