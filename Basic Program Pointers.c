#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;   // Declare a pointer

    ptr = &num; // Store the address of num in ptr

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);

    printf("Pointer ptr stores address: %p\n", ptr);
    printf("Value at the address ptr points to: %d\n", *ptr);

    return 0;
}
