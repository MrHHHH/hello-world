#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(0<=a&&a<=2147483647)
		printf("%X",a);
	return 0;
}