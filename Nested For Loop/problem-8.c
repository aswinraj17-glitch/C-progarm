#include<stdio.h>
#include<stdio.h>
int main(){
    for(int i=5;i>0;i--){
        for(int a=1;a<=5-i;a++){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}