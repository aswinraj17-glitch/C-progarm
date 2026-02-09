#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    int max=0;
    int count=0;
    for(int i=0;i<len;i++){
            if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' 
             ||str[i]=='u' ||str[i]=='A' 
                ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U' ){
                    count++;
                    if(count>max){
                        max=count;
                    }
                    
                }
                else{
                    count=0+1;
                }
        
    }
    printf("%d",max);
}