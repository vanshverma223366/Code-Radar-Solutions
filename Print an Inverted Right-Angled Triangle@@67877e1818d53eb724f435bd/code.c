#include <stdio.h>
void inverted_right_angled_triangle(int n ){
    for (int i=n;i>0;i--){
        for(int j=i;j>0;j--){
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