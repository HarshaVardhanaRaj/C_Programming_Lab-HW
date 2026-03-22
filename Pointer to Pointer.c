#include <stdio.h>

int main() {
    int num = 20;

    int *ptr;     // pointer to int
    int **pptr;   // pointer to pointer

    ptr = &num;     // ptr stores address of num
    pptr = &ptr;    // pptr stores address of ptr

    printf("Value of num: %d\n", num);

    printf("Address of num: %p\n", &num);
    printf("Value in ptr (address of num): %p\n", ptr);

    printf("Address of ptr: %p\n", &ptr);
    printf("Value in pptr (address of ptr): %p\n", pptr);

    printf("Value using ptr (*ptr): %d\n", *ptr);
    printf("Value using pptr (**pptr): %d\n", **pptr);

    return 0;
}
