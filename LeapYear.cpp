#include <stdio.h>
int main()
{
	int f = 0;//frist
	int e = 0;//end
	int count = 0;
	scanf("%d%d", &f, &e);
	int i = f < e ? f : e;
	int j = f < e ? e : f;
	printf("Leap Year:\n");
	for (; i <= j; i++) {
		if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0) {
			printf("%d\t", i);
			count++;
		}
	}
	printf("\ncount: %d", count);
	return 0;
}