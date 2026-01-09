#include <stdio.h>

void main()
{
    double kmph, mps;
    printf("Enter speed in km/hr: ");
    scanf("%lf",&kmph);

    mps = (10*kmph)/36;                                                                                                                                                                                                                                                ;
    printf("Speed in m/s = %lf",mps);
}
