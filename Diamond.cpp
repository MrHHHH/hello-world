#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 6 - i; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 6; i++) {
		for (j = 0; j < i + 1; j++) {
			printf(" ");
		}
		for (j = 0; j < 11 - 2 * i; j++) {//13-2*(i+1)
			printf("*");
		}
		printf("\n");
	}
	return 0;
}