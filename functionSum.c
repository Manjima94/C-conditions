#include <stdio.h>
void Sum();
int main()
{
    Sum();
    return 0;
}
void Sum(){
    int num1,num2,sum;
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("Sum is %d",sum);
}
