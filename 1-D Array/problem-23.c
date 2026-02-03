#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int closest=0;
    for(int i=0;i<N;i++){
        if(arr[i]==1){
            closest++;
            
        }

    }
    if(closest==1){
        printf("%d",1);
    }else{
        printf("%d",-1);
    }
}