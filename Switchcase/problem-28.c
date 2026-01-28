#include <stdio.h>

int main() {
    int type;

    scanf("%d",&type);

    
    switch (type) {
        case 1:   
            printf("Room Type-Single\n");
            printf("%d",80000);
            break;
            
            case 2:   
            printf("Room Type-Double\n");
            printf("%d",60000);
            break;
            
            case 3:   
            printf("Room Type-triple\\n");
            printf("%d",45000);
            break;

        default:
            printf("Invalid \n");
            return 0;
    }
   

    return 0;
}