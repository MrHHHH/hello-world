#include<stdio.h>
int main()
{
    int input = 0;
    while (EOF != scanf("%d", &input))
    {
        if (input < 0)
        {
            printf("Score is error!\n");
        }
        else 
        {
            switch (input / 10)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("E\n");
                break;
            case 6:
                printf("D\n");
                break;
            case 7:
                printf("C\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 9:
            case 10:
                printf("A\n");
                break;
            default:
                printf("Score is error!\n");
                break;
            }
        }
    }
    return 0;
}