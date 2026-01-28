#include <stdio.h>

int main() {
    int doctortype;

    scanf("%d",&doctortype);

    
    switch (doctortype) {
        case 1:   
            printf("General Physician\n");
            printf("Consultation Fee : %d",500);
            break;
            
            case 2:   
            printf("Specialist\n");
            printf("Consulltation Fee : %d",1200);
            break;
            
            

        default:
            printf("Invalid \n");
            return 0;
    }
   

    return 0;
}