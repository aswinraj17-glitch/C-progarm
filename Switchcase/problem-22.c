#include <stdio.h>

int main() {
    int connectionType, units;
    int bill=0;

    printf("Enter connection type (1-Domestic, 2-Commercial): ");
    scanf("%d",&connectionType);

    printf("Enter units consumed: ");
    scanf("%d",&units);


    switch (connectionType) {
        case 1:   
            if (units<=30) {
                bill=units*5;
            } else {
                bill=(30*5)+((units-30)*8);
            }
            break;

        case 2:   
            bill=units*10;
            break;

        default:
            printf("Invalid Connection Type\n");
            return 0;
    }


    printf("Bill ₹%d\n", bill);

    return 0;
}