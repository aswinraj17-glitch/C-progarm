#include<stdio.h>
int main(){
    
    int N,WalletBalance;
    scanf("%d",&WalletBalance);
    scanf("%d",&N);
    int i=0;
    int sum=0;
    int count=0;
    int remaining=0;
    while(i<N){
        int amount;
        scanf("%d",&amount);
        sum+=amount;
        if(sum<WalletBalance){
            count++;
            remaining=WalletBalance-sum;
        }
        i++;

    }
    printf("Succesful Purchases:%d\n",count);
    printf("Final Balance:%d",remaining);

}