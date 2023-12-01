#include <stdio.h>

int main()
{
    int limit,i,j;
    printf(" enter a limit");
scanf("%d",&limit);
for(i=2000;i<=limit;i++){
if(i%4==0 &&i%100!=0 || i%400==0 ){
    
printf("%d\n",i);
}
}
    return 0;
}