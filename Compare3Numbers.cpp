#include <stdio.h>
#define SWAP(a,b) { a = a ^ b; b = a ^ b; a = a ^ b; }
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b) {
		SWAP(a, b);
	}
	if (a < c) {
		SWAP(a, c);
	}
	if (b < c) {
		SWAP(c, b);
	}
	printf("max -> min: %d %d %d\n", a, b, c);
	return 0;
}