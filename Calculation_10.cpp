#include <stdio.h>
#define MAX 100
int main()
{
    int n = 0;
    int a[MAX] = { 0 };
    while (EOF != scanf("%d", &n))
    {
        double sum = 0.0;
        double average = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }

        for (int i = 1; i < n - 1; i++)
        {
            sum += a[i];
        }

        average = sum / (n - 2);

        printf("%.2lf\n", average);
    }
    return 0;
}