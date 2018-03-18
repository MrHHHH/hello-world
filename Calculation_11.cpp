#include<stdio.h>  
int main()
{
    int n = 0;
    int m = 0;
    while (EOF != scanf("%d%d", &n, &m))
    {
        int num = 0;
        int sum = 0;
        for (int i = 2; i <= n * 2; i += 2)
        {
            sum += i;
            num++;
            if (num == m && (i != n * 2))
            {
                printf("%d ", sum / num);
                num -= m;
                sum = 0;
            }
        }
        if (sum == 0 && num == 0) continue;
        printf("%d\n", sum / num);
    }
}