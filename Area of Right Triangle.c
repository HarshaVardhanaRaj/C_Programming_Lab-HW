#include <stdio.h>

void main()
{
    double b, h;
    printf("Enter base of triangle: ");
    scanf("%lf",&b);

    printf("Enter height of triangle: ");
    scanf("%lf",&h);

    printf("Base = %lf\n",b);
    printf("Height = %lf\n",h);

    double area = 0.5*b*h;
    printf("Area = %lf\n",area);
}
