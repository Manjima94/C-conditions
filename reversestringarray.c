#include <stdio.h>
#include <string.h>
    
int main()
{
    char str[10];
    int i;
    printf("enter a string");
    for( i=0;i<=5;i++){
scanf("%c",&str[i]);
    }
    printf("entered name is ");
    for(i=0;i<=5;i++){
    
    printf("%c",str[i]);
    }
    printf("reversed string is ");
    for(i=5;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}