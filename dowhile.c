#include <stdio.h>
int main(){
    char c;
    int choice,dummy;
    do
    {
    printf ("1 Flutter \n2 DSA\n3 HTML\n4 Exit");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Flutter");
        break;
        case 2:
        printf("DSA");
        break;
        case 3 :
        printf("HTML");
        break;
        case 4:
        printf("exit");
        break;
        default:
        printf("enter valid choice");
       
    }
    printf("\ndo you want more?");
    scanf("%d",dummy);
    scanf("%c",&c);
    }while(c=='y');
}
