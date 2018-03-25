#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			printf("%d%d%d%d\n",a,b,b,a);
	return 0;
}