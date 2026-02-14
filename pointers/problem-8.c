#include <stdio.h>
int main() {
    char str1[100];
    char str2[100];
    char *p1,*p2;

    printf("Enter string 1:\n");
    scanf("%s",str1);
    printf("Enter string 2:\n");
    scanf("%s",str2);

    p1=str1;
    p2=str2;

    while(*p1!='\0'){
        p1++;
    }
    while(*p2!='\0'){
        *p1=*p2;
        p1++;
        p2++;
    }
    *p1='\0';
    printf("%s",str1);



}
   
