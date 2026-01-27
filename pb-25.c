#include <stdio.h>

int main() {
    int a, b;
    char op;

    scanf("%d", &op);
    
    switch (op) {
        case 1:
            scanf("%d %d", &a, &b);
            printf("Sum = %d", a + b);
        break;
        case 2:
            scanf("%d %d", &a, &b);
            printf("Difference = %d", a - b);
            break;
            case 3:
            scanf("%d %d", &a, &b);
            printf("Multiply= %d", a * b);
            break;
            case 4:
            scanf("%d %d", &a, &b);
            printf("Division= %d", a / b);
            break;
        default:
            printf("Invalid Operator");
    }

    return 0;
}