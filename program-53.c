#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    int tot=a/=b;
    int tot2=a%=b;
    printf("%d %d",tot,tot2);
}