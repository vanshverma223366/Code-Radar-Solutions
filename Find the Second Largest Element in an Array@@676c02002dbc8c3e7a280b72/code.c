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

    // Finding the largest number
    for (int i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    // Finding the second largest number
    for (int i = 0; i < n; i++) {
        if (array[i] > slargest && array[i] < largest) {
            slargest = array[i];
        }
    }

    if (slargest == -1) {
        
    } else {
        printf("%d", slargest);
    }

    return 0;
}