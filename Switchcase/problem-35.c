#include <stdio.h>

int main() {
    int fuelType, Perlitre,litres;
    scanf("%d",&fuelType);
    scanf("%d",&litres);

    

    switch(fuelType) {
        case 1:
            Perlitre=105;
            break;
        case 2:
            Perlitre=92;
            break;
        case 3:
            Perlitre=85;
            break;
    }

    printf("Rate = %d\n",Perlitre*litres);

    return 0;
}
