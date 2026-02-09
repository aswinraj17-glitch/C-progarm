#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i] >='A' && str[i]<='Z'){
            printf("Valid");
        }
        else{
            printf("Invalid");
        }
        break;

    }
}