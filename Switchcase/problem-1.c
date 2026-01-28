#include<stdio.h>
int main(){
    printf("Connection Type\n");
    printf("1.Domestic\n");
    printf("2.Commercial\n");
    
    int a,b;
    scanf("%d %d",&a,&b);
    int c=0;
    switch (a)
    {
        case 1:
        if(100<b && 200>b){
            c=b-100;
            printf("%d",(300+(c*5))-80);
            break;
        }
        else if (b>=200){
            c=b-100;
            printf("%d",(300+(c*7))-80);
            break;
          }
         else{
            printf("%d",b*3);
            break;
        }
        
        case 2:
            c=b-100;
            printf("%d",(10*20)+700);
            break;
        break;

        
        
    default:
    printf("Invalid");
        break;
    }


}