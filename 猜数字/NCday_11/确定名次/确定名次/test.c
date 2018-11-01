//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；(b==2&&a!=3)  (b!=2&&a==3)
//B选手说：我第二，E第四；(b==2&&e!=4)  (b!=2&&e==4)
//C选手说：我第一，D第二；(c==1&&d!=2)  (c!=1&&d==2)
//D选手说：C最后，我第三；(c==5&&d!=3)  (c!=5&&d==3)
//E选手说：我第四，A第一；(e==4&&a!=1)  (e!=4&&a==1)
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0; int b = 0; int c = 0; int d = 0; int e = 0;
	printf("名次是:\n");
	for (a = 1; a < 6; a++)
	{
		for (b = 1; b < 6; b++)
		{
			for (c = 1; c < 6; c++)
			{
				for (d = 1; d < 6; d++)
				{
					for (e = 1; e < 6; e++)
					{
						if ((a != b) && (a != c) && (a != d) && (a != e) &&
							(b != c) && (b != d) && (b != e) &&
							(c != d) && (c != e) &&
							(d != e))
						{
							if (((b == 2) + (a == 3) == 1) &&
								((b == 2) + (e == 4) == 1) &&
								((c == 1) + (d == 2) == 1) &&
								((c == 5) + (d == 3) == 1) &&
								((e == 4) + (a == 1) == 1))
							{
								printf("a：第 %d 名\n", a);
								printf("b：第 %d 名\n", b);
								printf("c：第 %d 名\n", c);
								printf("d：第 %d 名\n", d);
								printf("e：第 %d 名\n", e);
							}
						}
					}
				}
			}
		}
	}

	system("pause");
	return 0;
}