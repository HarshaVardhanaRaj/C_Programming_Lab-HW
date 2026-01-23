#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    printf("Enter coefficients of x2 & x and the constant: ");
    scanf("%d,%d,%d",&a,&b,&c);

    double r1,r2,d;

    d = b*b - 4*a*c;

    if(d>=0)
        r1 = (-b + pow(d,0.5))/(2*a);
        r2 = (-b - pow(d,0.5))/(2*a);
        printf("Root 1 = %lf\n",r1);
        printf("Root 2 = %lf\n",r2);

    if(d>0)
        printf("Real and Distinct Roots");
    else if(d==0)
        printf("Real and Equal Roots");
    else
        printf("Imaginary Roots");
}

