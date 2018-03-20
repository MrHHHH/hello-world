#include<stdio.h>  
int main()
{
    int n = 0;
    char s;
    while (EOF != scanf("%d", &n))
    {
        getchar();
        for (int i = 0; i < n; ++i)
        {
            int count = 0;
            while ((s = getchar()) != '\n')
            {
                if (s <= '9' && s >= '0')
                {
                    count++;
                }
            }
            printf("%d\n", count);
        }
    }
    return 0;
}