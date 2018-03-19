#include <stdio.h>
#include <math.h>
void bubblesort1(int a[], int n)
{
    int i, j;

    for(i=n-1; i > 0; i--)
    {
        for(j=1; j<=i; j++)
            if(abs(a[j-1]) < abs(a[j])) {
                int temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
    }
}

int main(void)
{
    int n, a[100+1], i;

    while(scanf("%d", &n) != EOF) {
        if(n == 0)
            break;
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
        bubblesort1(a, n);
        for(i=0; i<n; i++) {
            if(i != 0)
                printf(" ");
            printf("%d", a[i]);
        }
        printf("\n");
    }

    return 0;
}
