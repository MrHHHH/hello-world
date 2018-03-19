#include<stdio.h>  
int main()
{
    int n = 0; 
    int m = 0; 
    int arr[101] = { 0 };
    int i = 0;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        if (n == 0 && m == 0) 
        {
            break;
        }
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (m > arr[i])
            {
                printf("%d ", arr[i]);
            }
        }
        printf("%d", m);
        for (i = 0; i < n; i++)
        {
            if (m <= arr[i])
            printf(" %d", arr[i]);
        }
        printf("\n");
    }
    return 0;
}