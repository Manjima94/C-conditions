#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three numbers ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf(" greater is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("greatest number is %d", b);
    }
    else
    {
        printf("greatest is %d", c);
    }
    if (a < b && a < c)
    {
        printf("lesser number is %d", a);
    }
    else if (b < a && b < c)
    {
        printf("lesser number is %d", b);
    }
    else
    {
        printf("lesser is %d", c);
    }
}