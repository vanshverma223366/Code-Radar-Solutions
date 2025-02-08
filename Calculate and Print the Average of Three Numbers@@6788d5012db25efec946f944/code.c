#include <stdio.h>
float average(float a,float b,float c){
    float avg=(a+b+c)/3;
    return avg;
}
int main() {
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    printf("Average: %.2f",(float)average(a,b,c));
    return 0;
}