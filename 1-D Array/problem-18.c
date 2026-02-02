#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
     int current=1, max=1;

    for (int i=1;i<N;i++) {
        if (arr[i] > arr[i - 1]) {
            current++;
        } else {
            current = 1;
        }

        if (current > max) {
            max = current;
        }
    }

    printf("%d", max);
    return 0;

}