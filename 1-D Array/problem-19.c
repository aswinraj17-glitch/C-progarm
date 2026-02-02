#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < N; i++) {
        int isUnique = 1;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
