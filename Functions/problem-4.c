#include<stdio.h>
void Area(int R){
    float area=3.14*R*R;
    printf("%.2f",area);

}

int main(){
    int R;
    scanf("%d",&R);
    Area(R);
    return 0;
}