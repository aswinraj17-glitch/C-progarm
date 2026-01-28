#include <stdio.h>

int main() {
    int type;

    scanf("%d",&type);

    
    switch (type) {
        case 1:   
            printf("Sleeper\n");
            printf("300");
            break;
            
            case 2:   
            printf("3AC\n");
            printf("800");
            break;
            
            case 3:   
            printf("2AC\n");
            printf("1500");
            break;

        default:
            printf("Invalid \n");
            return 0;
    }
   

    return 0;
}