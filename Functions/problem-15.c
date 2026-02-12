#include<stdio.h>
void multiplication(int n){
    int mul=1;
    for(int i=1;i<=n;i++){
        mul=i*n;
        printf("%d x %d = %d\n",i,n,mul);
    
    }
}
int main(){
    int n;
    scanf("%d",&n);
    multiplication(n);
    return 0;
}