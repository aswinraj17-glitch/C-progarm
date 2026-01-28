#include <stdio.h>

int main() {
    int power;

    scanf("%d",&power);
    int type;
    if(power<=1)
        type=1;
    else if(power<=4)
        type=2;
    else if(power==4)
        type=3;


    

    
    switch (type) {
        case 1:   
            printf("Short interrupt");
            break;

        case 2:   
            printf("Medium Interrupt");
            break;

        case 3:   
            printf("Long Interrupt");
            break;

        default:
            printf("Invalid \n");
            return 0;
    }
   

    return 0;
}