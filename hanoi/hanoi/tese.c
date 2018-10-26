#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void hanoi(int n, char x, char y, char z)
{
	//如果是一个盘子，直接从X——Z;
	//否则：
	//    先将n-1个从X——>Y,
	//    再将X柱子上的最后一个从X-->Z
	//    最后将n-1个盘子从Y——>Z

	if (n<=1)
	{
		printf("将编号为%d的从%c------------>%c\n", n, x, z);
	}
	else
	{
		hanoi(n - 1, x,z,y);
		printf("将编号为%d的从%c------------>%c\n", n, x, z);
		hanoi(n - 1, y,x,z);
	}
}
int main()
{
	int n = 0;
	char ch='x',ch2= 'y', ch3='z';
	scanf("%d", &n);
	hanoi(n,'x','y','z');
	system("pause");
	return 0;
}