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
        if (arr[i]>largest+2){
            largest=arr[i];
            printf("%d",largest);
            break;
        }
        else{
            printf("-1");
        }
    }

    return 0;
}