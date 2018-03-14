#include<stdio.h>
int main()
{
	int g = 0, s = 0, b = 0;
	int count = 0;
	for (int i = 100; i <= 999; i++)
	{
		g = i % 10;
		b = i / 100;
		s = (i - g - (b * 100)) / 10;
		if (i == g*g*g + s*s*s + b*b*b)
		{
			printf("%d\t", i);
			count++;
		}
	}
	printf("\ncount：%d\n", count);
	return 0;
}