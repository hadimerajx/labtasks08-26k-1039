#include <stdio.h>

int main() {
    int arr[5] = {4, 9, 2, 7, 5};
    int *p = arr;
    int sum = 0;
    int max = *p;
    int i;

    for (i = 0; i < 5; i++) {
        sum = sum + *p;
        if (*p > max) {
            max = *p;
        }
        p++;
    }

    printf("Sum = %d\n", sum);
    printf("Largest = %d\n", max);
    return 0;
}