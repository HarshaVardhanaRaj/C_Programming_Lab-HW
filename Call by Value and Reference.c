#include <stdio.h>

void main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Value of 'a' = %d\n", a);
    printf("Address of 'a' = %p\n", &a);
    printf("Address of 'a' = %p\n", p);
    printf("Value at address of 'a' = %d\n", *p);
}
