#include <stdio.h>

int main() {
    int age = 20;
    int *p = &age;

    printf("age = %d\n", age);
    printf("*p = %d\n", *p);

    *p = 21;

    printf("age = %d\n", age);
    return 0;
}