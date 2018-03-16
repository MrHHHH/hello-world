#include <stdio.h>
int count_one_bits(int n)
{
	int count = 0;
	while (n) {
		n = n&(n - 1);
		count++;
	} 
	return count;
}
int main( )
{
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	int n = a ^ b;
	int count = count_one_bits(n);
	printf("%d\n", count);
	return 0;
} 
