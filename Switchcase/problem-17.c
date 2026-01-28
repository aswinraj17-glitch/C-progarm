#include <stdio.h>

int main() {
    int vehicleType, hours;
    int rate, fee;

    
    scanf("%d",&vehicleType);
    scanf("%d",&hours);

    switch (vehicleType) {
        case 1: 
            rate=10;
            break;

        case 2: 
            rate=20;
            break;

        default: 
            rate=20;
    }

    fee = rate*hours;

    
    printf("Parking Fee %d", fee);

    return 0;
}