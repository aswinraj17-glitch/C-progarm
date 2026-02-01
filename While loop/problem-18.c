#include<stdio.h>
int main(){
    int capacity,N;
    scanf("%d",&capacity);
    scanf("%d",&N);
    int i=0;
    int count=0;
    int safe=0;
    while(i<N){
        int Value;
        scanf("%d",&Value);
        if(Value>capacity){
            count++;
        }else if(Value<capacity){
            safe++;
        }
        Value++;
        i++;


    }
    printf("Safe Hours : %d\n",safe);
    printf("Failure Count : %d",count);
}