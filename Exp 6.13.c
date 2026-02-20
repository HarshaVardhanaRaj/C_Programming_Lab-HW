#include <stdio.h>

int main()
{
    int base, hra, da, pf, lic, ded, gross, net;
    printf("Enter the Basic Pay: ");
    scanf("%d",&base);

    hra = 0.18*base;
    da = 0.15*base;
    pf = 0.10*base;
    lic = 0.07*base;
    ded = pf+lic;
    gross = base + hra + da;
    net = gross - ded;

    printf("Base Salary = %d\n",base);
    printf("Net Salary = %d",net);

    return 0;
}
