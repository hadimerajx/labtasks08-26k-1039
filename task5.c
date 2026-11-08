#include <stdio.h>
int divide(int a, int b, int *result)
{
    if (result == NULL)
    {
        return -1;
    }
    if (b == 0)
    {
        return -1;
    }
    *result = a / b;
    return 0;
}

int main()
{
    int res = 0;
    int r;

    r = divide(10, 2, &res);
    printf("Test 1: return = %d, result = %d\n", r, res);

    r = divide(10, 0, &res);
    printf("Test 2: return = %d\n", r);

    r = divide(10, 2, NULL);
    printf("Test 3: return = %d\n", r);
}