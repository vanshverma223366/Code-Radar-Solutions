#include <stdio.h>
float area_of_circle(float);
float area_of_circle(float radius){
    float pi=3.14;
    return pi*radius*radius;
}
int main() {
    float radius;
    scanf("%f",&radius);
    printf("Area: %.2f",area_of_circle(radius));
    return 0;
}