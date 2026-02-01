#include<stdio.h>
int main(){
    int fuel,N;
    scanf("%d",&fuel);
    scanf("%d",&N);
    int i=0;
    int sum=0;
    int count=0;
    int remaining=0;
    int trigger=0;
    int fail=0;
    // int position=0;
    while(i<N){
        int fuelBurn;
        scanf("%d",&fuelBurn);
        sum+=fuelBurn;//115
        remaining=sum-fuel;//r=115-100 = 15

        if(sum<fuel){ 
            count++;
            trigger++;
            if(trigger>fail){
                fail=trigger;
                if(fail<=fuel){
                    remaining=i;
                }
            }
        }else{
            trigger=0;
        }
        i++;
        }
    if(sum<fuel){
    printf("Emergency Stage : Not Occured\n");
    }else{
    printf("Emergency Stage : %d\n",count);
    }
    if(sum<fuel){
    printf("Fuel Wasted : 0\n");
}else{
    printf("Fuel Wasted : %d\n",remaining);
    
    }


}