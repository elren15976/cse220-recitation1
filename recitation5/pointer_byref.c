#include <stdio.h>

void swap(int x, int y)
{
    // Value is copied, so modifying it here does not affect the variables outside the function

    printf("Address of a inside swap() function: %p\n", &x);

    int temp = x;
    x = y;
    y = temp;
}

// Both are pass by value!

void swap_byref(int *x, int *y)
{
    printf("Address of a inside swap_byref() function: %p\n", x);
    // The value is copied here, but the value is an address to the variables passed in
    // Since we have the address, we can the variable from outside the function within this function
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char const *argv[])
{

    int a = 11, b = 22;

    printf("Address of a outside the function: %p\n", &a);

    swap(a, b);

    printf("a = %d, b = %d\n", a, b);

    swap_byref(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
