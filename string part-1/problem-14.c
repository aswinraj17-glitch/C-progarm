#include<stdio.h>

int main(){
    
    char s1[100];
    char s2[100];
    scanf("%s",s1); 
    int i=0;
    while(s1[i]!='\0'){
        s2[i]=s1[i];
        i++;
        
    }
    s2[i]='\0';
    printf("%s",s2);
}