#include<stdio.h>
int main(){
    int maxCapacity,N;
    scanf("%d",&maxCapacity);
    scanf("%d",&N);
    int i=0;
    int sum=0;
    int remaining=0;
    while(i<N){
        int hours;
        scanf("%d",&hours);
        sum+=hours;
        remaining=sum-maxCapacity;

        i++;
        


    }
    if(sum>maxCapacity){
        printf("Treated Patients:%d\n",maxCapacity);
    }else if(sum<maxCapacity){
        printf("Treated Patients: %d\n",sum);
    }
    printf("Rejected Patients: %d",remaining);
    

}