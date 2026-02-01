#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int totalOvertime = 0;
    int BurnoutDays = 0;
    int i = 0;

    while (i < N) {
        int delay;
        scanf("%d", &delay);

        totalOvertime += delay;

        if (delay > 4) {
            BurnoutDays++;
        }

        i++;
    }

    printf("Total OverTime: %d\n",totalOvertime );
    printf("Burnout Days: %d\n", BurnoutDays);

    return 0;
}
