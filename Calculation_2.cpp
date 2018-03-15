#include <stdio.h>
int main( )
{
	int count = 0;
	int i = 0;
	for (i = 9; i < 100; i++) {
		int flag = 0;
		if (i % 10 == 9) {
			count++;
			flag++;
		}
		if (i / 10 == 9) {
			count++;
			flag++;
		}
		if (flag) {
			printf("%d\t", i);
		}
	}
	printf("\ncount: %d\n", count);
	return 0;
}
