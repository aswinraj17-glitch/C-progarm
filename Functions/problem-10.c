#include<stdio.h>
void sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    
    }
    printf("%d",sum);
}
int main(){
    int n;
    scanf("%d",&n);
    sum(n);
    return 0;
}