#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;

    int *arr[3];  // array of 3 pointers to int

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    for(int i = 0; i < 3; i++) {
        printf("Address stored in arr[%d]: %p\n", i, arr[i]);
        printf("Value at that address: %d\n", *arr[i]);
    }

    return 0;
}
