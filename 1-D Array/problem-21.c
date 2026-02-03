#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int duplicate=0;
    int repeat=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
            duplicate=1;
            repeat=arr[j];
        }
    }
    if(duplicate==0){
        count+=1;
        }
        
}

if(count==0){
    printf("-1");
}else{
    printf("%d",repeat);
}
    

}