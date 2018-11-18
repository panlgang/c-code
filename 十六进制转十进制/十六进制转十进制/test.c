#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<math.h>
unsigned int convert(const char* str, int len)
{
	assert(str);
	int i = 0;
	unsigned int dec = 0;
	if (len > 8 || len <= 0)//int最多只能存32位即8位16进制数
	{
		printf("Error\n");
		return -1;
	}
	else if (len > 0 && len < 9)
	{
		for (i = len - 1; i >= 0; i--)
		{
			if (str[i]<='9'&&str[i]>='0')//字符0和0不同，1='1'-'0'
			{
				dec += (int)(str[i] - '0')*pow(16, (len - i - 1));
			}
			else if (str[i]<='z'&&str[i]>='a') 
			{
				dec +=(int) (str[i] - 'a'+10)*pow(16, (len - i-1));
			}
			else if (str[i] <= 'Z'&&str[i] >= 'A')
			{
				dec +=(int) (str[i] - 'A'+10)*pow(16, len - i-1);
			}
			else
			{
				printf("Error\n");
				return -1;
			}	
		}
	}
	return dec;

}
int main()
{
	char* str = "FFFFFFFF";
	unsigned int dec = 0;
	int len = strlen(str);
	dec = convert(str,len);
	printf("0x%s = %u\n", str, dec);
	system("pause");
	return 0;
}