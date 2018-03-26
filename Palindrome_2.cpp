#include<stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=0;c<=9;c++)
			{
				if(n==2*a+2*b+c)
					printf("%d%d%d%d%d\n",a,b,c,b,a);
			}
			for(a=1;a<=9;a++)
				for(b=0;b<=9;b++)
					for(c=0;c<=9;c++)
					{
						if(n==2*a+2*b+2*c)
							printf("%d%d%d%d%d%d\n",a,b,c,c,b,a);
					}
	return 0;
}