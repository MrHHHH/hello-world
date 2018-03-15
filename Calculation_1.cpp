#include <stdio.h>

int main()
{
	int i = 0;
	double sum = 1;
	for (i = 2; i <= 100; i++) {
		if (i % 2 != 0) {
			sum += (1.0 / i);
		}
		else {
			sum -= (1.0 / i);
		}
	}
	printf("sum = %f\n", sum);
	return 0;
}
