#include <stdio.h>
void main()
{
    int num, n, s=0, d;
    printf("Enter a num: ");
    scanf("%d",&num);
    n = num;

    while(n>0)
    {
        d = n%10;
        s = s + (d*d*d);
        n = n/10;
    }

    if(num==s)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}
