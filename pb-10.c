#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=100 && n<=999){
        printf("Three Digit Number");
    }
    else{
        printf("Not 3 digit number");
    }
}