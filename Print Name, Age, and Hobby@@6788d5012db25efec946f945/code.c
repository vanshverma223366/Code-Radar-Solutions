#include <stdio.h>
int main() {
    char Name[10],Hobby[10];
    int Age;
    scanf("%s %d",&Name,&Age);
    scanf("%s",&Hobby);
    printf("Name: %s\n",Name);
    printf("Age: %d\n",Age);
    printf("Hobby: %s",Hobby);
    return 0;
}