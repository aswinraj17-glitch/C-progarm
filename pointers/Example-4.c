#include<stdio.h>
int vowel(char *a){
    return(*a=='a'|| *a=='e'||*a=='i'||*a=='o'||*a=='u'
        ||*a=='A'||*a=='E'||*a=='I'||*a=='O'||*a=='U');
}
int main(){
    char str[100];
    scanf("%s",str);
    char *p=str;
    int count=0;
    while(*p!='\0'){
        if(vowel(p)){
            break;
        }
        count++;
        p++;
    }
    printf("%d",count);
    return 0;

}