#include<stdio.h>
int main(){
    printf("Plan-1 1GB per day\n");
    printf("Plan-2 2GB per day\n");
    int a;
    scanf("%d",&a);
    float b;
    scanf("%f",&b);
    switch (a)
    {
    case 1:
    if(b<=1.0){
        printf("Normal speed");
    }
    else{
        printf("Speed Reduced");
    }
    break;
    case 2:
    if(b<=2.0){
        printf("Normal speed");
    }
    else{
        printf("Extra Charges applied");
    }
        /* code */
        break;
    
    default:
    printf("Invalid Plan");
        break;
    }

}