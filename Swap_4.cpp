#include <stdio.h>
void swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
int main()
{
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	printf("before: a = %d , b = %d\n", a, b);
	swap(&a, &b);
	printf("after: a = %d , b = %d\n", a, b);
	return 0;
}