#include <stdio.h>

int main() {
    int booktype, dayslate,perday;
    scanf("%d",&booktype);
    scanf("%d",&dayslate);

    

    switch(booktype) {
        case 1:
            dayslate*=2;
            printf("Late Fee = %d\n",dayslate);
            break;
            case 2:
            dayslate*=5;
            printf("Late Fee = %d\n",dayslate);
            break;
    }


    return 0;
}
