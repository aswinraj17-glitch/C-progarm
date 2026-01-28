#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    switch (a)
    {
    case 199:
        if(a==1||a==2){
            printf("Pay %d",199-20);
            break;
        }
        else{
            printf("Pay %d",199);
        }
    case 399:
        if(a==1 ||a==2){
            printf(" Pay %d",399-20);
            break;
        }
        else{
            printf("Pay %d",399);
        }
    
    default:
    printf("Invalid");
        break;
    }

}