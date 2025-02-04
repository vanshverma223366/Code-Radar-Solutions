#include <stdio.h>
void inverted_right_angled_triangle(int n ){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }printf("\n");
    }
}
int main() {
    int n;
    scanf("%d",&n);
    inverted_right_angled_triangle(n);
    return 0;
}