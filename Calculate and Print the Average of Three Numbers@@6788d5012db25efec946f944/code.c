#include <stdio.h>
int average(int,int,int);
int average(int a,int b,int c){
    int avg=(a+b+c)/3;
    return avg;
}
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("Average: %d",average(a,b,c));
    return 0;
}