#include <stdio.h>

int main() {
    int type;

    scanf("%d",&type);

    
    switch (type) {
        case 1:   
            printf("Free Course\n");
            printf("Certificate Fee : %d",0);
            break;
            
            case 2:   
            printf("Paid Course\n");
            printf("Certificate Fee : %d",500);
            break;
            
            

        default:
            printf("Invalid \n");
            return 0;
    }
   

    return 0;
}