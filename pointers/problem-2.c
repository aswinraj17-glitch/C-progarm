#include <stdio.h>

int findMax(int *p, int n) {
    int max=*p;

    for (int i=1;i<n;i++) {
        p++;                 
        if (*p>max) {
            max=*p;
        }
    }
    return max;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]); 
    }
    int max=findMax(arr, n);
    printf("%d",max);
    return 0;
}
