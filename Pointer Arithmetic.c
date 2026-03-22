#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("%d\n", *ptr);        // 10
    printf("%d\n", *(ptr + 2));  // 30

    ptr++;
    printf("%d\n", *ptr);        // 20

    int *p1 = &arr[4];
    int *p2 = &arr[1];

    printf("%ld\n", p1 - p2);    // 3

    return 0;
}
