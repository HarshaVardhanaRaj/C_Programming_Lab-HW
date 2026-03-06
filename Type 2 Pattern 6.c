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
            if(i==1 && j<=mid)
                printf("* ");
            else if(j==n && i>=mid)
                printf("* ");
            else if(i==n && j>=mid)
                printf("* ");
            else if(j==1 && i<=mid)
                printf("* ");
            else if(i+j==mid+1 && i<=mid)
                printf("* ");
            else if(i+j==n+mid)
                printf("* ");
            else if(j==mid || i==mid ||i==j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 1;
}
