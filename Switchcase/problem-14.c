#include <stdio.h>

int main() {
    int type, age;
    

    
    scanf("%d", &type);
    scanf("%d", &age);

    switch (type) {
        case 1:   
            if (age<= 5) {
                printf( "%d",1500);
            } 
            else {
                printf( "%d",25000);   
            }
            break;
        case 2:   
            if (age<= 5) {
                printf( "%d",4000);
            } 
            else {
                printf( "%d",6000);   
            }
            break;

        

        default:
            printf("Invalid");
            break;
    }

    


    return 0;
}