#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int len=strlen(s);
    int max=0;
    for(int i=0;i<len;i++) {
        int count=0;
        for(int j=i;j<len;j++) {
            int repeat=0;
            for(int k=i;k<j;k++) {
                if (s[k]==s[j]) {
                    repeat=1;
                    break;
                }
            }
            if(repeat == 1)
                break;

            count++;
        }
        if(count>max)
            max=count;
    }

    printf("%d",max);
    return 0;
}
