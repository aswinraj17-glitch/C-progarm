#include <stdio.h>

int main() {
    int loan, credit;
    

    
    scanf("%d", &loan);
    scanf("%d", &credit);

    switch (loan) {
        case 1:   
            if (credit >= 700) {
                printf( "Approved");
            } 
            else if (credit >=650 && credit<=699) {
                printf( "Manual Review");   
            }
            break;

        case 2:  
            if (credit >= 700) {
                printf( "Approved");
            } 
            else if (credit <700) {
                printf("Rejected");   
            }
            break;

        default:
            printf("Invalid");
            break;
    }

    


    return 0;
}