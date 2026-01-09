#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d",&a);

    printf("Enter 2nd number: ");
    scanf("%d",&b);

    printf("Before swapping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    c = a;
    a = b;
    b = c;

    printf("After swapping:\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
}
