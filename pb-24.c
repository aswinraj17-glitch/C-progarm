#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);

    switch (month) {
        case 2:
            printf("28 or 29 days");
            break;
        default:
            printf("30 or 31 days");
    }

    return 0;
}