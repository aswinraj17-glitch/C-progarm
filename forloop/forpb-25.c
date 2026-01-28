#include <stdio.h>
#include <math.h>

int main() {
    int N,original,digit,sum=0,count=0,temp;

    scanf("%d",&N);
    original=N;

    
    temp=N;
    while(temp>0) {
        count++;
        temp=temp/10;
    }
    temp=N;
    while(temp>0) {
        digit=temp%10;
        sum+=pow(digit,count);
        temp=temp/10;
    }

    if(sum == original)
        printf("Yes");
    else
        printf("No");

    return 0;
}