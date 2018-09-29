#define _CRT_SECURE_NO_WARNINGS 2
int bianry_search(int arr[], int left, int right, int key)
{
	int mid = 0;
	while (left <= right)
	{
		//int mid = (left + right) / 2;
		mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] == key)
		{
			return mid;
		}
		else
		{
			left = mid + 1;
		}
	}
	return -1;

}
int main()
{
	int arr[10] = { 1, 2, 4, 5, 8, 12, 34, 45, 67, 89 };
	int left = 0;
	int key = 45;
	int right = sizeof(arr) / sizeof (arr[0]) - 1;
	int ret = bianry_search(arr, left, right, key);
	if (ret != -1)
		printf("目标元素的下标是%d\n", ret);
	else
		printf("找不到\n");
	system("pause");
	return 0;
}