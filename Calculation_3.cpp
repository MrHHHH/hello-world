#include <stdio.h>
int main( )
{
	int a = 0;
	int sn = 0;
	int i = 0, t = 0;
	scanf("%d", &a);
	for (i = 0; i < 5; i++) {
		t = t * 10 + a;
		sn += t;
	}
	printf("Sn = %d\n", sn);
	return 0;
}
