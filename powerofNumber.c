#include <stdio.h>

int main()
{
    int base ,exponential;
    int power = 1;

    printf("Enter a base number");
    scanf("%d",&base);
    printf("Enter a exponent number");
    scanf("%d",&exponential);

    for (int i = 1; i <= exponential; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %d",base, exponential,power);
    
    return 0;
}