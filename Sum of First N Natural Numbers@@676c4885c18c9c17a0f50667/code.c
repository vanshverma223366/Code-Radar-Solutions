#include <stdio.h>
int sum(int n);
 int sum=0,i=1;
 while (i<=n){
    sum +=i;
    i++
 }
 return sum;

int main() {
int n;
scanf("%d",&n);
printf("%d",sum(n));
    return 0;
}