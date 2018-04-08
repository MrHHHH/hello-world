#include <stdio.h>
#include <math.h>
int main()
{
	int count = 0;
	int i = 0, j = 0;
	for (i = 101; i < 200; i += 2) {
		int flag = 0;
		for (j = 2; j < sqrt(i); j++) {
			if (i%j == 0) {
				flag = 1;
			}
			if (flag == 1) {
				break;
			}
		}
		if (flag == 0) {
			printf("%d\t", i);
			count++;
		}
	}
	printf("\ncount:%d\n", count);
	return 0;
} 
