#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    char *p=str;
    int index=0;
    while(*p!='\0'){
        if(index%2!=0){
            *p='*';

        }
        index++;
        p++;
    }
    printf("%s",str);
    return 0;
}