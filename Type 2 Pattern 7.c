#include <stdio.h>
int main()
{
    int i, j, n, mid;
    printf("Enter value of n: ");
    scanf("%d",&n);
    mid = (n+1)/2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j==mid+1 && i<=mid)
                printf("* ");
            else if(i+j==n+mid)
                printf("* ");
            else if(j==mid || i==mid ||(i==j && (i<=mid/2 || i>=(n-mid/2))))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 1;
}
