#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
       
        return 1;
    }

    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int largest = array[0], slargest = -1;


    for (int i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }


    for (int i = 0; i < n; i++) {
        if (array[i] > slargest && array[i] < largest) {
            slargest = array[i];
        }
        else{
        printf("-1");
        break;}
    }

    if (slargest == -1) {
        
    } else {
        printf("%d", slargest);
    }

    return 0;
}