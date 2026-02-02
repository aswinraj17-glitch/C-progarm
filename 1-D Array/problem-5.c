#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int arr[n];
    int missing;
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];//1+2+4+5=12

    }
    missing=n*(n+1)/2;//5*(5+1)/2=5(6)/2=30/2=15  //15
    printf("%d",missing-sum);//15-12= 3  //3
    
}