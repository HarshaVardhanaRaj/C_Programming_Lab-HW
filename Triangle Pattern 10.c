#include <stdio.h>
int main()
{
    int n , i, j;
    printf("Enter value of n: ");
    scanf("%d",&n);

    int mid=(n+1)/2, str = mid, sp=1 ;

    for(i=1 ; i<=n ; i++)
    {
        for(j=1; j<=str ; j++)
            printf("* ");

        for(j=1; j<=sp ; j++)
            printf("  ");

        for(j=1; j<=str ; j++)
            printf("* ");

        if(i<mid)
        {
            sp+=2;
            str--;
        }
        else
        {
            sp-=2;
            str++;
        }
        printf("\n");
    }
}
