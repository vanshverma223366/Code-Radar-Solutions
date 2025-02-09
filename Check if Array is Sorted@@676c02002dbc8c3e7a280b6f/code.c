#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],sorted=0,notSorted=0;
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if (arr[i]<=arr[i+1]){
            sorted+=1;
        }else{
            notSorted+=1;
        }
    }

    if(sorted>=(n-1)){
        printf("Sorted");
    }else if(notSorted>0){
        printf("Not Sorted");
    }
    
    return 0;
}