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
        s = s+d;
        n = n/10;
    }

    printf("Sum of digits = %d",s);
}
