#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int orders[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&orders[i]);
    }

    int k=0;
    for (int i=0;i<N;i++) {
        if (orders[i]!=0) {
            orders[k]=orders[i];
            k++;
        }
    }
    while (k < N) {
        orders[k] = 0;
        k++;
    }
    for (int i=0;i<N;i++) {
        printf("%d ", orders[i]);
    }

    return 0;
}
