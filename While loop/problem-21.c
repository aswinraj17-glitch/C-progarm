#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i=0;
    int count=0;
    int longg=0;
    int streak=0;
    while(i<N){
        int VehicleCount;
        scanf("%d",&VehicleCount);

        if(VehicleCount>20){
            count++;
            longg++;
            if(longg>streak){
                streak=longg;
            }
        }else{
            longg=0;

        }
        VehicleCount++;
        i++;

    }
    printf("Congestion Minutes: %d\n",count);
    printf("Longest Congestion Streak: %d\n",streak);

}