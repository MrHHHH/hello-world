#include<stdio.h>
int main()
{
    int n = 0;
    double input = 0.0;
    while (EOF != scanf("%d", &n))
    {
        if (n == 0)
        {
            break;
        }
        int pos_num = 0;
        int neg_num = 0;
        int zer_num = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%lf", &input);
            if (input > 0)
            {
                pos_num++;
            }
            else if (input == 0)
            {
                zer_num++;
            }
            else
            {
                neg_num++;
            }
        }
        printf("%d %d %d\n", neg_num, zer_num, pos_num);
    }
    return 0;
}