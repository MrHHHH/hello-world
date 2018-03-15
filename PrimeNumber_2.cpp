#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
	int i = 0;
	for (i = 2; i < sqrt(n); i++)
	{
		if (n%i == 0) {
			return 0;
		}
	}	
	return 1;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (isPrime(num) == 1) {
		printf("%d is prime number.\n", num);
	}
	else {
		printf("%d is not prime number.\n", num);
	}
	return 0;
}