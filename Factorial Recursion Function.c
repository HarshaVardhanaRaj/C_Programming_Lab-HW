#include <stdio.h>

int fact(int a);

void main()
{
    int n, f;
    printf("Enter a Num: ");
    scanf("%d",&n);
    f = fact(n);
    printf("Factorial = %d",f);
}

int fact(int a)
{
    if(a==1)
        return 1;
    else if(a==0)
        return 1;
    else
        return(a*fact(a-1));
}
