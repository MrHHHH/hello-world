#include<stdio.h>
int IsLeapYear(int year)
{
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int year = 0;
    int month = 0;
    int day = 0;
    int a[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    while (EOF != scanf("%d/%d/%d", &year, &month, &day))
    {
        int count = 0;
        if (IsLeapYear(year))
        {
            if(month > 2)
            count = 1;
        }
        for (int i = 0; i < month - 1; i++)
        {
            count += a[i];
        }
        count += day;
        printf("%d\n", count);
    }
    return 0;
}