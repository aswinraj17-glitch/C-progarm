#include <stdio.h>

int main() {
    int seatType, showTime;
    int price = 0;

    
    printf("Enter seat type (1-Silver, 2-Gold): ");
    scanf("%d",&seatType);

    printf("Enter show time (0-23): ");
    scanf("%d",&showTime);

    switch (seatType) {
        case 1: 
            price=150;
            break;

        case 2: 
            price=250;
            break;

        default:
            printf("Invalid Seat Type\n");
            return 0;
    }

    
    if (showTime>=18) {
        price=price+50;
    }

    printf("Ticket Price %d\n", price);

    return 0;
}
