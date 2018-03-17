#include<stdio.h>
int main()
{
    int n = 0;
    int input = 0;
    while (EOF != scanf("%d", &n))
    {
        int sum = 1;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &input);
            if (input % 2 == 1)
            {
                sum *= input;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}