#include <stdio.h>

int main() {
    int vehicleType, Perkm,distance;
    scanf("%d",&vehicleType);
    scanf("%d",&distance);

    

    switch(vehicleType) {
        case 1:
            Perkm=10;
            break;
        case 2:
            Perkm=15;
            break;
        case 3:
            Perkm=20;
            break;
    }

    printf("Rate = %d\n",Perkm*vehicleType*10);

    return 0;
}
