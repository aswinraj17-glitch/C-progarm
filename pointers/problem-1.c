#include<stdio.h>
void swap(int *c,int *d){
    int temp=0;
    temp=*c;
    *c=*d;
    *d=temp;
    printf("Swap is done\n");

}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swap : %d %d\n",a,b);
    swap(&a,&b);
    printf("After swap : %d %d\n",a,b);
    return 0;

}