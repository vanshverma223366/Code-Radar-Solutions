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
        if (arr[i]>largest+2||arr[i]>largest){
            largest=arr[i];
            printf("%d",largest);
            break;
        }
    }
        

    return 0;
}