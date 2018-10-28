#define _CRT_SECURE_NO_WARNINGS 2
int main()
{
	int arr[] = {1,2,3,4,5,6,5,3,4,2,1};
	int ret = 0;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	printf("%d\n", ret);
	system("pause");
	return 0;
}