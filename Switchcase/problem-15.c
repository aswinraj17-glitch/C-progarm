#include <stdio.h>

int main() {
    int type, mode;
    

    
    scanf("%d", &type);
    scanf("%d", &mode);

    switch (type) {
        case 1:   
            if (mode == "Regular" || "R") {
                printf( "%d",5000);
            } 
            else if (mode=="Scholarship" || "S") {
                printf( "%d",3000);   
            }
            break;
        case 2:   
            if (mode== "Regular" || "R") {
                printf( "%d",9000);
            } 
            else if (mode=="Scholarship" || "S") {
                printf( "%d",7000);   
            }
            break;

      

        default:
            printf("Invalid");
            break;
    }

    


    return 0;
}