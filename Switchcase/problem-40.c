#include <stdio.h>

int main() {
    int warrantycategory;

    scanf("%d",&warrantycategory);
    int type;
     if(warrantycategory>=0 && warrantycategory<=1)
        type=1;
    else if(warrantycategory==2)
        type=2;
    else if(warrantycategory>2)
        type=3;

    
    switch (warrantycategory) {
        case 1:   
            printf("Under Warranty");
            break;
            
            case 2:   
            printf("Limited Warranty");
            break;
            case 3: 
            printf("Out of Warranty");
            break;
            
            

        default:
            printf("Invalid \n");
            return 0;
    }
   

    return 0;
}