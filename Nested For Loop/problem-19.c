#include <stdio.h>

int main() {
    int n = 5;   // height of half pattern
    int i, j;

    // Top full row
    for (i = 1; i <= 2*n; i++) {
        printf("* ");
    }
    printf("\n");

    // Upper half
    for (i = n-1; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("* ");

        for (j = 1; j <= 2*(n-i); j++)
            printf("  ");

        for (j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }

    // Lower half
    for (i = 1; i <= n-1; i++) {
        for (j = 1; j <= i; j++)
            printf("* ");

        for (j = 1; j <= 2*(n-i); j++)
            printf("  ");

        for (j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }

    // Bottom full row
    for (i = 1; i <= 2*n; i++) {
        printf("* ");
    }

    return 0;
}