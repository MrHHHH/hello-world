#include <stdio.h>
void fun(char *x, char *y)
{
    if (*x > *y)
    {
        char tmp = *x; 
        *x = *y;
        *y = tmp;
    } 
}
int main()
{
    char a, b, c;
    while (scanf("%c%c%c", &a, &b, &c) != EOF)
    {
        getchar();
        fun(&a, &b);
        fun(&a, &c);
        fun(&b, &c);
        printf("%c %c %c\n", a, b, c);
    }
    return 0;
}
 
