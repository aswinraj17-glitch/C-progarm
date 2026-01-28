#include <stdio.h>

int main() {
    int type;

    scanf("%d",&type);

    
    switch (type) {
        case 1:   
            printf("%d",1200);
            break;

        case 2:   
            printf("%d",800);
            break;

        case 3:   
            printf("%d",500);
            break;

        default:
            printf("Invalid \n");
            return 0;
    }
   

    return 0;
}