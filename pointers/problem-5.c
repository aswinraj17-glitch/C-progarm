#include<stdio.h>
void sum(int arr[],int n){
    int sum=0;
    int *p=arr;
    for(int i=0;i<n;i++){
        sum=sum+*(p+i);
    }
    printf("%d",sum);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum(arr,n);
}