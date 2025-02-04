#include <stdio.h>
void square(int n ){
    for (int i=n;i>0;i--){
        for(int j=n;j>0;j--){
            printf("* ");
        }printf("\n");
    }
}
int main() {
    int n;
    scanf("%d",&n);
    square(n);
    return 0;
}