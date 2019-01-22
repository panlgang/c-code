#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void swap(int* arr, int i, int j){
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}
void insertSort(int arr[], int len){  //≤Â»Î≈≈–Ú
	assert(arr != NULL);
	assert(len > 2);
	for (int i = 0; i < len; i++){
		for (int j = i - 1; j >= 0; j--){
			if (arr[j] > arr[j + 1]){
				swap(arr, j, j + 1);
			}
		}
	}
}

int* partion(int* arr, int L,int R){
	int less = L - 1;
	int more = R;
	static int ret[2] = { 0 };
	//int* ret = (int*)malloc(sizeof(int) * 2);
	if (ret == NULL){
		printf("hh\n");
	}
	while (L < more){
		if (arr[L] < arr[R]){
			swap(arr, ++less, L++);
		}
		else if (arr[L] > arr[R]){
			swap(arr, --more, L);
		}
		else{
			L++;
		}
	}
	swap(arr, more, R);
	ret[0] = L;
	ret[1] = more;
	return ret;

}
void quickSort(int* arr,int L, int R){  //øÏÀŸ≈≈–Ú
	assert(arr != NULL);
	if (L < R){
		int* p = partion(arr, L, R);
		quickSort(arr, L, p[0] - 1);
		quickSort(arr, p[1] + 1, R);
	}
	
}

void bubbleSort(int* arr, int len){    //√∞≈›≈≈–Ú
	for (int i = 0; i < len; i++){
		int flag = 1;
		for (int j = 0; j < len - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				swap(arr, j, j + 1);
				flag = 0;
			}
		}
		if (flag == 1){
			return;
		}
		
	}
}

void selsectSort(int* arr, int len){   //—°‘Ò≈≈–Ú
	for (int i = 0; i < len; i++){
		int mindex = i;
		for (int j = i + 1; j < len; j++){
			mindex = arr[j] > arr[mindex] ? mindex : j;
		}
		swap(arr, mindex, i);
	}
}



int main(){
	int arr[] = { 1, 6, 2, 3, 5, 8, 9, 7, 4, 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//insertSort(arr, len);
	//quickSort(arr, 0, len - 1);
	//bubbleSort(arr, len);
	//selsectSort(arr, len);
	for (int i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}