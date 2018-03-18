#include<stdio.h>  
#include<math.h>
void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int main()
{
    int x = 0;
    int y = 0;
    while (EOF != scanf("%d%d", &x, &y))
    {
        if ((0 == x) && (0 == y))
        {
            break;
        }
        if (x > y)
        {
            swap(&x, &y);
        }
        int count = 0;
        for (int i = x; i <= y; i++)
        {
            int s = i * i + i + 41;
            for (int j = 2; j < sqrt(s); j++)
            {
                if (s % j == 0)
                {
                    count++;
                }
            }
        }
        if (0 == count)
        {
            printf("OK\n");
        }
        else
        {
            printf("Sorry\n");
        }
    }
    return 0;
}