#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    int nonrepeat=0;
    for(int i=0;i<len;i++){
        int count=0;
        for(int j=0;j<len;j++){
            if(str[i]==str[j]){
                count++;//1
            }
        }
        if(count==1){
            printf("%c",str[i]);
            nonrepeat=1;
            break;
        }
    }
    if(!nonrepeat){
        printf("-1");
    }
}