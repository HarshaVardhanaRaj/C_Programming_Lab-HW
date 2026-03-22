#include <stdio.h>

// Function that takes a pointer
void changeValue(int *ptr) {
    *ptr = 100;   // modifies the original variable
}

int main() {
    int num = 10;

    printf("Before: %d\n", num);

    changeValue(&num);  // pass address of num

    printf("After: %d\n", num);

    return 0;
}
