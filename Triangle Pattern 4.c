#include <stdio.h>

int main()
{
    int n , i, j;
    printf("Enter value of n: ");
    scanf("%d",&n);

    int str = n, sp=0;
    for(i=1 ; i<=n ; i++)
    {
        for(j=1; j<=sp ; j++)
            printf("  ");
        for(j=1; j<=str ; j++)
            printf("* ");
        str--;
        sp++;
        printf("\n");
    }
}
