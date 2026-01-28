#include <stdio.h>

int main() {
    int distancecategory;

    scanf("%d",&distancecategory);
    int type;
     if(distancecategory<=5)
        type=1;
    else if(distancecategory>=6 && distancecategory<=10)
        type=2;
    else if(distancecategory==10)
        type=3;

    
    switch (distancecategory) {
        case 1:   
            printf("Transport Fee : %d",800);
            break;
            
            case 2:   
            printf("Transport Fee: %d",1200);
            break;
            case 3: 
            printf("Transport Fee: %d",1800);
            break;
            
            

        default:
            printf("Invalid \n");
            return 0;
    }
   

    return 0;
}