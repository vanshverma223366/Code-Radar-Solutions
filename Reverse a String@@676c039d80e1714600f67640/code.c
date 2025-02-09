#include <stdio.h>
#include<string.h>
int main() {
    char str[];
    scanf("%s",&str);
    int n=strlen(str);
    for (int i=n;i>=0;i++){
        printf("%s",str);
    }
    return 0;
}