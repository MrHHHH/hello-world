#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len; ++i) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 1; i < len; ++i) {
		if (max < arr[i]) {
			max = max ^ arr[i];
			arr[i] = max ^ arr[i];
			max = max ^ arr[i];
		}
	}
	printf("max = %d\n", max);
	return 0;
}