#include<stdio.h>
int main()
{
    int n = 0;
    int arr[100] = { 0 };
    int min = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (n == 0)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        min = arr[0];
        int k = 0;
        for (int i = 0; i<n; i++)
        {
            if (arr[i] < min)
            {
                k = i;
                min = arr[k];
            }
        }
        if (min != arr[0])
        {
            int t = arr[k]; 
            arr[k] = arr[0]; 
            arr[0] = t;
        }
        for (int i = 0; i<n; i++)
            if (i == 0)
                printf("%d", arr[i]);
            else
                printf(" %d", arr[i]);
        printf("\n");
    }
    return 0;
}