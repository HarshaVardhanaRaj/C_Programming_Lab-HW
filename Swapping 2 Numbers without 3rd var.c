#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d",&a);

    printf("Enter 2nd number: ");
    scanf("%d",&b);

    printf("Before swapping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("After swapping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}
