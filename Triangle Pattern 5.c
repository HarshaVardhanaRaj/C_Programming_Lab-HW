#include <stdio.h>

int main()
{
    int n , i, j;
    printf("Enter value of n: ");
    scanf("%d",&n);

    int str = n-1, sp=-1;
    for(i=1 ; i<=n ; i++)
    {
        for(j=1; j<=str ; j++)
            printf("* ");

        if(i==1)
            str=n;

        for(j=1; j<=sp ; j++)
            printf("  ");

        for(j=1; j<=str ; j++)
                printf("* ");

        str--;
        sp=sp+2;
        printf("\n");
    }
}
