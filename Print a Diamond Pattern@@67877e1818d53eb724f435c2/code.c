#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        for (int j=1;j<=(n-i)/2;j++){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf("*");
        }
        for (int l=(n-i)/2;l<=n;l++){
            printf("*");
        }
        // for (int j=1;j<=i;j++){
        //     printf("*");
        // }
        printf("\n"); 
    }
    return 0;}