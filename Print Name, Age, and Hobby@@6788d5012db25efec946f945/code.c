#include <stdio.h>
int main() {
    char Name,Hobby;
    int Age;
    scanf("%c %d",&Name,&Age);
    scanf("%c",&Hobby);
    printf("Name: %c\n",Name);
    printf("Age: %d\n",Age);
    printf("Hobby: %c",Hobby);
    return 0;
}