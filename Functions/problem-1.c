#include<stdio.h>
void simpleintrest(int P,int R,int T){
    float cal=P*R*T/100;
    printf("%.2f",cal);

}

int main(){
    int P,R,T;
    scanf("%d %d %d",&P,&R,&T);
    simpleintrest(P,R,T);
    return 0;
}