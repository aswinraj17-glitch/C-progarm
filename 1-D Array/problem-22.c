#include <stdio.h>

int main() {
    int N, i;
    int Count = 0;
    int arr[100];
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < N - 1; i++) {
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            Count++;
        }
    }
    printf("%d", Count);

    return 0;
}
