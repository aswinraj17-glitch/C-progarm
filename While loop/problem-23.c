#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int count=0;
    int count1=0;
    int i=0;
    int position=0;
    while(i<N){
        int vib;
        scanf("%d",&vib);

        if(vib>70){
            count++;//5
        }
        else{
            position=i;//4
            count1++;//2
        }
        i++;
    }
    if(count1>=N){
        printf("Breakdown At Reading: Not Occurred\n");
    }else{
        printf("Breakdown At Reading : %d\n",position);
    }
    printf("Unsafe Reading : %d",count);

}