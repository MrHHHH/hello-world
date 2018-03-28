#include <stdio.h>
void print(int num)
{
	int i = 0, j = 0;
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			printf("%-2d*%-2d=%-3d ", j, i, j*i);
		}
		printf("\n");
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
} 
