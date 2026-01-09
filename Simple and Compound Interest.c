#include <stdio.h>
#include <math.h>

void main()
{
    double p, r, t, n;
    printf("Enter the Principle Amt: ");
    scanf("%lf",&p);

    printf("Enter the Rate of Interest: ");
    scanf("%lf",&r);

    printf("Enter the Time Period in years: ");
    scanf("%lf",&t);

    double si = (p*r*t)/100, ci = p*pow((1 + r), t) ;
    printf("Simple Interest = %lf\n",si);
    printf("Coumpound Interest = %lf\n",ci);
}
