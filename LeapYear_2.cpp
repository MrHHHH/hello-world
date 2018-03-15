#include <stdio.h>
int isLeapYear(int year)
{
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
		return 1;
	}
	return -1;
}
int main()
{
	int year = 0;
	scanf("%d", &year);
	int flag = isLeapYear(year);
	if (flag == 1) {
		printf("%d is a leap year.\n", year);
	}
	else{
		printf("%d isn't a leap year.\n", year);
	}
	return 0;
}