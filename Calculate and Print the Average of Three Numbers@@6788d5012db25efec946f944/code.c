#include <stdio.h>
float average(int a,int b,int c){
    float avg=(a+b+c)/3;
    return avg;
}
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Average: %.2f",(float)average(a,b,c));
    return 0;
}