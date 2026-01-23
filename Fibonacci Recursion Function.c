#include <stdio.h>

void fib(int a, int b, int i);

void fib(int a, int b, int i)
{
    if (i>=1)
    {
        int c = a+b;
        printf("%d\n",c);
        fib(b,c,--i);
    }
}

void main()
{
    int count;
    printf("How many fibonacci nos?: ");
    scanf("%d",&count);

    printf("0\n");
    printf("1\n");
    fib(0,1,(count-2));
}

