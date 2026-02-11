#include<stdio.h>
void sum(int n){
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    
    }
    printf("%d",sum);
}
int main(){
    int n;
    scanf("%d",&n);
    sum(n);
    return 0;
}