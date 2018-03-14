#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			putchar(ch - 32);
		}
		if (ch >= 'A'&&ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else
			;
	}
	return 0;
}