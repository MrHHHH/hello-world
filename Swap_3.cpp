#include <stdio.h>
#define SWAP(a,b) {a = a ^ b; b = a ^ b; a = a ^ b;}
int main()
{
	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr2[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int len = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < len; i++) {
		SWAP(arr1[i], arr2[i]);
	}
	printf("arr1: ");
	for (i = 0; i < len; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2: ");
	for (i = 0; i < len; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	return 0;
}