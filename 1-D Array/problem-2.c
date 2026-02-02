#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;

}