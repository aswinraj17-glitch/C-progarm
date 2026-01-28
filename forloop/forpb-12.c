#include<stdio.h>
int  main(){
    int n,p;
    int power=1;
    scanf("%d",&n);
    scanf("%d",&p);
    for(int i=1;i<=p;i++){
         power=power*n;
    }
    printf("%d ",power);
}
