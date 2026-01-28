#include <stdio.h>

int main() {
    int type;

    scanf("%d",&type);

    
    switch (type) {
        case 1:   
            // printf("No Basic\n");
            printf("Speed 40 mbps");
            break;
            
            case 2:   
            // printf("Standard\n");
            printf("Speed 100 mbps");
            break;
            
            case 3:   
            // printf("Premium\n");
            printf("Speed 300 mbps");
            break;

        default:
            printf("Invalid \n");
            return 0;
    }
   

    return 0;
}