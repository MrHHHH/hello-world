#include<stdio.h>
void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int main()
{
    int m = 0;
    int n = 0;
    while (EOF != scanf("%d%d", &m, &n))
    {
        int g = 0;
        int s = 0;
        int b = 0;
        int count = 0;
        if (m > n)
        {
            swap(&m, &n);
        }
        for (int i = m; i <= n; i++)
        {
            g = i % 10;
            b = i / 100;
            s = (i - g - (100 * b)) / 10;
            if (g*g*g + s*s*s + b*b*b == i)
            {
                if (count == 0)
                {
                    printf("%d", i);
                    count++;
                }
                else 
                {
                    printf(" %d", i);
                    count++;
                }
                
            }
        }
        if (count == 0)
        {
            printf("no");
        }
        printf("\n");
    }
    return 0;
}