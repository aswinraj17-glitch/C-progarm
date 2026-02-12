#include<stdio.h>
void digit(int n){
    int temp=0;
    for(int i=0;i<n;i++){
        int sum=sum+i;
        sum=i;
        temp=sum;
        printf("%d ",temp);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    digit(n);
    return 0;
}