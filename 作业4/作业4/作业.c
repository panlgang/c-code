#define _CRT_SECURE_NO_WARNINGS 2
int main()
{

	while (1)
	{
		char ch = getchar();
		if (48 <= ch&&ch <= 57)
			;
		if (97 <= ch&&ch <= 122)
		{
			putchar(ch - 32);
		}
		if (ch >= 65 && ch <= 90)
		{
			putchar(ch + 32);
		}
	}
	system("pause");
	return 0;
}