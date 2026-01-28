#include<stdio.h>
int main(){
    printf("Type-1 Developer\n");
    printf("Type-2 Tester\n");
    int a;
    scanf("%d",&a);
    int b;
    scanf("%d",&b);
    int bonus;
    if(b>3){
        bonus=5000;
    }
    
    switch (a)
    {
    case 1:
    if(b>3){
        printf(" Salary %d",50000+bonus);
    }
    else{
        printf("Salary %d",50000);
    }
        
    
        break;
        
       
    
        
    case 2:
        if(b>3){
        printf("Salary %d",35000+bonus);
    }
    else{
        printf("%d",35000);
    }
        
    
        break;
    default:
    printf("Invalid");
        break;
    }

}