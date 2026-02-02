#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    
    }
    int sort=1;//1
    for(int i=0;i<n;i++){
       if(arr[i]>arr[i+1]){//100>101 F 300>101 T 200>100 T
        sort=0;
        break;
       }
    }
    if(sort){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}