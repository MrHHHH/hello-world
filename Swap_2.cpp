#include <stdio.h>
#define SWAP(a,b) { a = a ^ b; b = a ^ b; a = a ^ b; }
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("before: a = %d  b = %d\n", a, b);
	SWAP(a, b);
	printf("after: a = %d  b = %d\n", a, b);
	return 0;
} 
