#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        for (int j=65;j<65+i;j++){
            printf("%c ",j);
            }
        printf("\n");
    }
  return 0;  
}