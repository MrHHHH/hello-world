#include<stdio.h>
#include<math.h>
int main()
{
    double n = 0.0;
    int m = 0;
    while (EOF != scanf("%lf%d", &n, &m))
    {
        double sum = 0.0;
        for (int i = 0; i < m; i++)
        {
            sum += n;
            n = sqrt(n);
        }
        printf("%.2lf\n", sum);
    }
    return 0;
}