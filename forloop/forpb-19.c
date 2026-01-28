#include <stdio.h>

int main() {
    int a,b,i,max,lcm;

    scanf("%d %d",&a,&b);

    if (a>b)
        max=a;
    else
        max=b;

    for (i=max;i<=a*b;i++) {
        if (i%a==0 && i%b==0) {
            lcm=i;
            break;
        }
    }

    printf("%d", lcm);

    return 0;
}