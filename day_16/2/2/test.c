#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int fun(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k == 1)
		return n;
	else
	   return n*fun(n,k-1);
}
int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;
	printf("ÇëÊäÈën,kµÄÖµ£º");
	scanf("%d%d", &n, &k);
	ret = fun(n, k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}