#include<stdio.h>
void digit(int a,int b){
    int mul=1;
    for(int i=0;i<b;i++){
        mul=mul*a;

    }
    printf("%d",mul);
    
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    digit(a,b);
    return 0;
}