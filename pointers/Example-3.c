#include<stdio.h>
void sorted(int arr[],int size){
    int *p=arr;
    int sum=0;
    for(int i=0;i<size;i++){
        if(*(p+i)>=50){
            break;

        }
        sum+=*(p+i);
    }
    printf("Final Array\n");
    printf("%d\n",sum);
}


int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    sorted(arr,size);
    return 0;

}