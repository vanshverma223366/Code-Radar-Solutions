#include <stdio.h>
void right_angled_triangle(int n ){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }printf("\n");
    }
}
int main() {
    int n;
    scanf("%d",&n);
    right_angled_triangle(n);
    return 0;
}