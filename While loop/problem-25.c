#include<stdio.h>
int main() {
    int totaldata;
    scanf("%d",&totaldata);
    int n;
    scanf("%d",&n);
    int rem=0;
    int sum=0;
    int count=0;
    int i=0;
    while (i<n) {
        int data;
        scanf("%d",&data);
        sum+=data;//12
        rem=totaldata-sum;//-2
        if (totaldata>sum) {//15>14 T
            count++;// 4
            
        }
        i++;
        data++;
    }
    printf("days used:%d\n",count);
    printf("remainig data:%dgb",rem);
}