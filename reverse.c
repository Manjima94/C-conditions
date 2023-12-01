#include <stdio.h>
int main(){
    int number,i;
    printf("enter a number");
    scanf("%d",&number);
    for(i=number;i>=0;i--){
        printf("%d\n",i);
    }
    
    
    return 0;
}