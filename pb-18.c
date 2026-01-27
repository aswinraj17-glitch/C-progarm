#include <stdio.h>

int main() {
    int units, bill;
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 5;
    else
        bill = units * 5;

    printf("Bill amount = Rs. %d", bill);
    return 0;
}