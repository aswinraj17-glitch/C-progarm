#include <stdio.h>

int main() {
    int maxWeight, N;
    scanf("%d", &maxWeight);
    scanf("%d", &N);
    int i=0;
    int count=0;
    int sum=0;
    

    while (i < N) {
        int Overloadstatus;
        scanf("%d", &Overloadstatus);

        sum+=Overloadstatus;
        if(maxWeight>=sum){
            count++;
        }
        i++;

        
    }
    printf("People Entered : %d\n",count);
    if(sum>maxWeight){
        printf("Overload  Status :Yes");
    }else{
        printf("Overload  Status :No");

    }


   
    return 0;
}
