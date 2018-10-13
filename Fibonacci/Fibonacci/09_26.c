#define _CRT_SECURE_NO_WARNINGS 2
int fun(int n)
{
	if (n <= 2)
	{
		n = 1;
	}
	else
	{
		n = fun(n - 1) + fun(n - 2);
	}
	return n;
}
int main()
{
	for (int i = 1; i < 20; i++)
	{
		printf("%d ", fun(i));
	}


	system("pause");
	return 0;
}