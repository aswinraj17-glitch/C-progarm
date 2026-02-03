                       
#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    // scanf("%d",&c);

    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);

        }
    }
    int count=0;
    int max=0;
    int index=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<c;k++){
            int unique=1;
            if(arr[i][j]==arr[i][k]){
                unique=0;
                break;
            }
            if(unique==1){
                count++;
            }
             if(count>max) {
            max=count;
            index = i;
        }

    }
    }
}
    printf("%d",index);
}