#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int max=-1;
    for(int i=n-1;i>=0;i--) {//2
        int temp=arr[i];// temp=3 =123, temp=2 =123 temp=1 =123
        arr[i]=max;// 3 -1  3 2 -1  3 1 -1

        if(temp>max) { //1>3 T 2>3 T 3>3F
            max=temp; //3 3
        }
    }

    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}
