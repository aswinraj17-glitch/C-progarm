#include <stdio.h>

int main() {
    int deliverymode;

    scanf("%d",&deliverymode);

    
    switch (deliverymode) {
        case 1:   
            printf("%d",40);
            break;

        case 2:   
            printf("%d",120);
            break;

        case 3:   
            printf("Free");
            break;

        default:
            printf("Invalid \n");
            return 0;
    }
   

    return 0;
}