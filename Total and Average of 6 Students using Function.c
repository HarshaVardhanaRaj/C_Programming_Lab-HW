#include <stdio.h>

int total(int m, int n, int o, int p, int q, int r);
float avg(int t);

int total(int m, int n, int o, int p, int q, int r)
{
    int s = m+n+o+p+q+r;
    return s;
}

float avg(int t)
{
    float a = t/6.0;
    return a;
}

void main()
{
    int a,b,c,d,e,f,tot;
    float av;
    printf("Enter marks of Student A: ");
    scanf("%d",&a);
    printf("Enter marks of Student B: ");
    scanf("%d",&b);
    printf("Enter marks of Student C: ");
    scanf("%d",&c);
    printf("Enter marks of Student D: ");
    scanf("%d",&d);
    printf("Enter marks of Student E: ");
    scanf("%d",&e);
    printf("Enter marks of Student F: ");
    scanf("%d",&f);

    tot = total(a,b,c,d,e,f);
    av = avg(tot);

    printf("Total = %d\n",tot);
    printf("Average = %f\n",av);
}
