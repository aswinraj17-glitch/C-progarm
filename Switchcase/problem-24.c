#include <stdio.h>

int main() {
    int callType, minutes;
    int charge=0;

    
    printf("Enter call type (1-Local, 2-STD, 3-ISD): ");
    scanf("%d",&callType);

    printf("Enter call duration in minutes: ");
    scanf("%d",&minutes);

    
    switch (callType) {
        case 1:   
            charge=minutes*1;
            break;

        case 2:   
            charge=minutes*3;
            break;

        case 3:   
            charge=minutes*10;
            break;

        default:
            printf("Invalid Call Type\n");
            return 0;
    }
    printf("Call Charge %d\n",charge);

    return 0;
}