#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
struct Complex
{
	int real;
	int img;
};
struct Complex plus(struct Complex a,struct Complex b)
{
	struct Complex c;
	c.real = a.real+b.real;
	c.img = a.img + b.img;
	return c;
}
struct Complex sub(struct Complex a, struct Complex b)
{
	struct Complex c;
	c.real = a.real - b.real;
	c.img = a.img - b.img;
	return c;
}
struct Complex multi(struct Complex a, struct Complex b)
{
	struct Complex c;
	c.real = a.real * b.real-a.img * b.img;
	c.img = a.img * b.real + b.img * a.real;
	return c;
}
void show(struct Complex c)
{
	if (c.img == 0 && c.real == 0)
	{
		printf("c=%d\n", c.img);
	}
	else if (c.img == 0)
	{
		printf("c=%d\n", c.real);
	}
	else if (c.real == 0)
	{
		printf("c=%di\n", c.img);
	}
	else
		{
			if (c.img < 0)
				printf("c=%d%di\n", c.real, c.img); 
			else
				printf("c=%d+%di\n", c.real, c.img);
		}
}
int main()
{
	struct Complex a;
	struct Complex b;
	struct Complex c;
	printf("输入复数a的实部和虚部:");
		scanf("%d,%d",&a.real, &a.img);
	printf("输入复数b的实部和虚部b:");
		scanf("%d,%d", &b.real, &b.img);
	c = plus(a, b);
	printf("a,b的和为：");
	show(c);
	c = sub(a, b);
	printf("a,b的差为：");
	show(c);
	printf("a,b的积为：");
	c = multi(a, b);
	show(c);
	system("pause");
	return 0;
}