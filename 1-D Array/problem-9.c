#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];//17
            count=i+1;//2
            printf("%d ",arr[i]);//17 5
            
        }
        else{
            max=arr[i];
    
        }

    }

for(int i=count;i<n;i++){
    printf("%d ",arr[i]);//2

    }
    

}