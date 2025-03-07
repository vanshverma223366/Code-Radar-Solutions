#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int smallestDiff=100,I=0,J=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
        
        if(smallestDiff>array[i]-array[j]&&array[i]-array[j]>0||smallestDiff>array[j]-array[i]&&array[j]-array[i]>0){
            smallestDiff=array[i]-array[j];
            I=array[i];
            J=array[j];
        }
        }
    }
    printf("%d %d",I,J);
    return 0;
}