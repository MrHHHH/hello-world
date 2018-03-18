#include<stdio.h>
int peach(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 2 * (peach(n - 1) + 1);
    }
}
int main()
{
    int n = 0;
    while (EOF != scanf("%d", &n))
    {
        printf("%d\n", peach(n));
    }
    return 0;
}