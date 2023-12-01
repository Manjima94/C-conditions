#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three numbers");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b&& a>c){
        printf(" greatest number is %d", a);
     } else  {
        printf("%d is lesser",b);
    } 
    if (a > c){
    printf("lesser number is %d",c);
     }else{
        printf("greatest number is %d", a);
    }
    if(b>c){
    printf("gretest number is %d",b);
   } else{
        printf("Lesser number is %d",c);
    }
     }
