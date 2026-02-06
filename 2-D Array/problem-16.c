#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
//     for(int i=0;i<c;i++){
//             sum+=arr[1][i];
//    }
int max=0;
int min=max;
    int index=0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
           if(sum>max){//6>0
            max=sum; //20
           }
           if(sum<min){
            min=sum;
           }


        }
        
        
        if(min){
            index=i;

        }
    }
    printf("%d",index);
}