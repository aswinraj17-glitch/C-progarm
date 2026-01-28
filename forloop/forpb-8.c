#include<stdio.h>
int main(){
    int n;
    int rev=0;
   
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10){
        int digit=i%10;
        rev=rev*10+digit;

        
        
    }
    printf("%d",rev);
    }
