#include<stdio.h>
int main(){
    int class,age;
    scanf("%d %d",&class,&age);
    int d=0;
    switch (class)
    {
    case 1:
       d=300;
       if(age<12){
       d=d/2;
       printf("Fare %d",d);
       break;
       }
    
       else if(age>=60){
        d=d-(d/3);
        printf("Fare %d",d);
        break;
        
       }
    case 2:
       d=1000;
       if(age<12){
       d=d/2;
       printf("Fare %d",d);
       break;
       }
    
    default:
    printf("Invalid");
        break;
    }

}