#include <stdio.h>
int main(){
    int a=0,b=1,c=a+b,limit;
   printf("enetr a limit");
scanf("%d",&limit);
for(int i=0;i<=limit;i++){
printf("%d\t",c);
a=b;
b=c;
c=a+b;
}
return 0;
}