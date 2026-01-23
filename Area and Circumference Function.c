#include <stdio.h>

void area(int r);
void circumference(int a);

void main()
{
    int rad;
    printf("Enter radius: ");
    scanf("%d",&rad);
    area(rad);
    circumference(rad);
}

void area(int r)
{
    float ar = 3.14*r*r;
    printf("Area = %f\n",ar);
}

void circumference(int a)
{
    float c = 2*3.14*a;
    printf("Circumference = %f\n",c);
}
