#include <stdio.h>

int main() {
    int delayDays, finePerDay;
    scanf("%d",&delayDays);

    int type;

    if(delayDays<=5)
        type=1;
    else if(delayDays<=10)
        type=2;
    else
        type=3;

    switch(type) {
        case 1:
            finePerDay=50;
            break;
        case 2:
            finePerDay=100;
            break;
        case 3:
            finePerDay=200;
            break;
    }

    printf("Fine = %d\n",finePerDay*delayDays);

    return 0;
}
