#include <stdio.h>

int main() {
    int customerType;
    int billAmount;
    int payAmount;

    
    printf("Enter customer type (1-Regular, 2-Premium): ");
    scanf("%d",&customerType);

    printf("Enter bill amount: ");
    scanf("%d",&billAmount);

    
    switch (customerType) {
        case 1:
            payAmount=billAmount-(billAmount*5/100);
            break;

        case 2: 
            payAmount=billAmount-(billAmount*15/100);
            break;

        default:
            printf("Invalid Customer Type\n");
            return 0;
    }


    printf("Pay %d\n", payAmount);

    return 0;
}