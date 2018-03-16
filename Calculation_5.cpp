#include<stdio.h>
#include<math.h>
int main()
{
    double num = 0.0;
    while (EOF != scanf("%lf", &num))
    {
        printf("%.2lf\n", fabs(num));
    }
    return 0;
}