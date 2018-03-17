#include<stdio.h>
void swap(int *x, int *y)
{
    if (*x > *y)
    {
        int tmp = *x;
        *x = *y;
        *y = tmp;
    }
}
int main()
{
    int left = 0;
    int right = 0;
    while (EOF != scanf("%d%d", &left, &right))
    {
        swap(&left, &right);
        int s1 = 0;
        int s2 = 0;
        for (int i = left; i <= right; i++)
        {
            if (i % 2 == 0)
            {
                s1 += (i * i);
            }
            else
            {
                s2 += (i * i * i);
            }
        }
        printf("%d %d\n", s1, s2);
    }
    return 0;
}