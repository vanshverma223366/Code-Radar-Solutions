#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("\n%d",largest);
    return 0;
}