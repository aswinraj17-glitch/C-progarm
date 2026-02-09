#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int maxCount=0;
    int secondMaxCount=0;
    char maxChar='\0';
    int  secondMaxChar='\0';

    for (int i=0;i<len;i++) {
        int count = 0;
        for (int j=0;j<len;j++) {
            if (str[i]==str[j]) {
                count++;//4
            }
        }
        if (count>maxCount) {//4>0T
            secondMaxCount=maxCount;//4
            secondMaxChar=maxChar;

            maxCount=count;//0=4 //0
            maxChar=str[i];//bbbb
        }
        else if (count<maxCount && count>secondMaxCount) {//2<4 && 2>4
            secondMaxCount=count;//2
            secondMaxChar=str[i];//aa
        }
    }
    if (secondMaxCount==0) {
        printf("%c",str[1]);//b
    } else {
        printf("%c",secondMaxChar);//a
    }
    return 0;
}
