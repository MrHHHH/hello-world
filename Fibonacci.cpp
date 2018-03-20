#include<stdio.h>
int fun(int n)
{
    if (n <= 4)
    {
        return n;
    }
    return fun(n - 1) + fun(n - 3);
}
int main()
{
    int n = 0;
    while (EOF != scanf("%d", &n))
    {
        if (n == 0)
        {
            break;
        }
        printf("%d\n", fun(n));
    }
    return 0;
}