#include <stdio.h>

int main() {
    int type;

    scanf("%d",&type);

    
    switch (type) {
        case 1:   
            printf("No Helmet\n");
            printf("Fine %d",1000);
            break;
            
            case 2:   
            printf("Signal Jump\n");
            printf("Fine %d",1500);
            break;
            
            case 3:   
            printf("Over speeding\n");
            printf("Fine %d",2000);
            break;

        default:
            printf("Invalid \n");
            return 0;
    }
   

    return 0;
}