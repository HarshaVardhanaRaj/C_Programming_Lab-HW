#include <stdio.h>

void main()
{
    double c;
    printf("Enter temp in celsius: ");
    scanf("%lf",&c);

    double f = 1.8*c + 32;

    printf("Temp in fahrenheit = %lf",f);
}
