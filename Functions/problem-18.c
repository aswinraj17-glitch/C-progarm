#include<stdio.h>
void gcd(int a,int b){
    int temp=0;//18 //6
    while(b!=0) {
        temp=b;//temp=18
        b=a%b;//18=12%18=6
        a=temp; //6
    }

    printf("%d",a);
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    gcd(a,b);
    return 0;
}