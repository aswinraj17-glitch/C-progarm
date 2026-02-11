#include<stdio.h>
void maximum(int A,int B){
    int max=0;
    if(A>B){
        max=A;
    }else{
        max=B;
    }
    printf("%d",max);

}

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    maximum(A,B);
    return 0;
}