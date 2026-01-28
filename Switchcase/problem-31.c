#include <stdio.h>

int main() {
    int type;

    scanf("%d",&type);

    
    switch (type) {
        case 1:   
            printf("1 month\n");
            printf("Membership Fee%d",15000);
            break;
            
            case 2:   
            printf("2 month\n");
            printf("Membership Fee %d",4000);
            break;
            
            case 3:   
            printf("3 month\\n");
            printf("Membership Fee %d",7000);
            break;

        default:
            printf("Invalid \n");
            return 0;
    }
   

    return 0;
}