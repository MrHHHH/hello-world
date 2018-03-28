#include <stdio.h>
int main()
{ 
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	while (b) {
		int tmp = a%b;
		a = b;
		b = tmp;
	}
	printf("GCD: %d\n", a);
	return 0;
}
