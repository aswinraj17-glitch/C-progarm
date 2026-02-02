#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int readings[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &readings[i]);
    }

    // Replace negative values with 0
    for (int i = 0; i < N; i++) {
        if (readings[i] < 0) {
            readings[i] = 0;
        }
    }

    // Print modified array
    for (int i = 0; i < N; i++) {
        printf("%d ", readings[i]);
    }

    return 0;
}
