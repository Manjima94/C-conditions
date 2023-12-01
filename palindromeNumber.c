#include <stdio.h>
int main(){
    int n,original,remainder,reversed;
    printf("enter a number");
    scanf("%d",&n);
    original=n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
        if(original==reversed){
            printf("palindrome");
        }else{
            printf("not a palindrome");
}
return 0;

}