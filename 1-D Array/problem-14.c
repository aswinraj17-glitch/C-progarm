#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    int prices[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&prices[i]);
    }

    int minPrice=INT_MAX;

    for (int i=0;i<N;i++) {
        if (prices[i]>0 && prices[i]<minPrice) {
            minPrice=prices[i];
        }
    }

    if (minPrice == INT_MAX) {
        printf("No positive");
    } else {
        printf("%d",minPrice);
    }

    return 0;
}
