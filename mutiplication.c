#include <stdio.h>
int main(){
    int number,i;
printf("enter a number");
scanf("%d",&number);
for(i=1;i<=10;i++){
printf("%dx%d=%d\n",i,number,i*number);
}
return 0;
}