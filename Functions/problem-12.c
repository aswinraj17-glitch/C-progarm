#include<stdio.h>
void leapyear(int n){
        if(n%400==0 ||n%100!=0 && n%4==0){
            printf("Leap Year");

        }
        else{
            printf("Not Leap Year");
        }

    
    
    
}
int main(){
    int n;
    scanf("%d",&n);
    leapyear(n);
    return 0;
}