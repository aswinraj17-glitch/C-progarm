#include<stdio.h>
int main(){
    int  n;
    scanf("%d",&n);
    int arr[n];
    
    int total=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        total+=arr[i];
        
    }
    int avg=total/n; //3
    for(int i=0;i<n;i++){
        if(avg==arr[i]){//3== 1 F 3==2 F 3==3 T
            printf("%d ",i);
            break;
        }

    }

    }
    
