#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int largest=array[0] ,slargest=array[0];
    for (int i=0;i<n;i++){
        if (array[i]>largest);
        largest=array[i];
    }
    for (int i=0;i<n;i++){
        if (array[i]>slargest && array[i]!=largest);
        slargest=array[i];

    }
    printf("%d",slargest);
    return 0;
}