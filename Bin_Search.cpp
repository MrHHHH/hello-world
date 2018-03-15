#include <stdio.h>
int bin_Search(int arr[], int left, int right, int key) 
{
	int i = 0;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (key < arr[mid]) {
			right = mid - 1;
		}
		if (key > arr[mid]) {
			left = mid + 1;
		}
		if (arr[mid] == key) {
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 0;
	printf("Find:");
	scanf("%d", &key);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	int i = bin_Search(arr, left, right, key);
	if (i == -1) {
		printf("Not Find!\n");
	}
	else {
		printf("Find %d ,Array subscript is %d \n", key, i);
	}
	return 0;
}
