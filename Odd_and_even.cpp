#include <stdio.h>
int main() 
{
	int num = 0;
	int i = 0;
	scanf("%d", &num);
	printf("偶数位：");
	for (i = 31; i >= 0; i-=2) {
		printf("%d ", (num >> i) & 1);
	}
	printf("\n奇数位：");
	for (i = 30; i >= 0; i -= 2) {
		printf("%d ", (num >> i) & 1);
	}
	return 0;
}