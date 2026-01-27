#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=10 && num<=20){
        printf("Number is within Range");
    }
    else{
        printf("Invalid");
    }
}
