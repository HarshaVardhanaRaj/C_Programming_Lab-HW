#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter value of a: ");
    scanf("%d",&a);

    printf("Enter value of b: ");
    scanf("%d",&b);

    if(a>b)
        printf("a > b is True\n");
    else
        printf("a > b is False\n");

    if(a>=b)
        printf("a >= b is True\n");
    else
        printf("a >= b is False\n");

    if(a<b)
        printf("a < b is True\n");
    else
        printf("a < b is False\n");

    if(a<=b)
        printf("a <= b is True\n");
    else
        printf("a <= b is False\n");

    if(a==b)
        printf("a == b is True\n");
    else
        printf("a == b is False\n");

    if(a!=b)
        printf("a != b is True\n");
    else
        printf("a != b is False\n");


    if(a>0 && b>0)
        printf("Both a and b are positive\n");

    if(a<0 && b<0)
        printf("Both a and b are negative\n");

    if((a>0 && b<0) || (a<0 && b>0))
        printf("a and b have opposite signs\n");

    printf("a BITWISE AND b = %ld\n",(a&b));
    printf("a BITWISE OR b = %ld\n",(a|b));
    printf("BITWISE NOT of a = %ld\n",(~a));
    printf("BITWISE NOT of b = %ld\n",(~b));
    printf("a BITWISE XOR b = %ld\n",(a^b));

    printf("a << 2 = %ld\n",(a<<2));
    printf("a >> 2 = %ld\n",(a>>2));
    printf("b << 2 = %ld\n",(b<<2));
    printf("b >> 2 = %ld\n",(b>>2));

    printf("Value of a++ = %d\n",(a++));
    printf("Value of b++ = %d\n",(b++));
    printf("Value of ++a = %d\n",(++a));
    printf("Value of ++b = %d\n",(++b));
    printf("Value of a-- = %d\n",(a--));
    printf("Value of b-- = %d\n",(b--));
    printf("Value of --a = %d\n",(--a));
    printf("Value of --b = %d\n",(--b));

    int c = (a>b)? a:b;
    printf("The bigger value = %d",c);

}
