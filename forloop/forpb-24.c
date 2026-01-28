#include <stdio.h>

int main() {
    int N,original,reverse=0,digit;

    scanf("%d",&N);
    original=N;

    while(N>0) {
        digit=N%10;
        reverse=reverse*10+digit;
        N=N/10;
    }

    if(original == reverse)
        printf("Yes");
    else
        printf("No");

    return 0;
}