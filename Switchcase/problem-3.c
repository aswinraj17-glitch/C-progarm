#include<stdio.h>
int main(){
    int acc;
    scanf("%d",&acc);
    int bal;
    scanf("%d",&bal);
    int w;
    scanf("%d",&w);
    
    switch (acc){
        case 1:
        if(bal>=w){
            printf("Transaction sucessful");
            break;
        
        }
        else{
            printf("Transaction Rejected");
            break;
        }
        case 2:
        if(w<=5000){
            printf("Transaction sucessful");
            break;
        }
        else{
            printf("Limit Exceeds");
            break;

        }

    
    
    
        
    
    
    default:
    printf("Invalid");
        break;
    }

}