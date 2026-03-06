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
            else if(j-i==mid-1 && i<=mid)
                printf("* ");
            else if(i==j && i<=mid/2)
                printf("* ");
            else if(i+j==n+1 && i<=mid/2)
                printf("* ");
            else if(i-j==mid-1 && (i>=mid && j<=mid/2))
                printf("* ");
            else if(i+j==n+1 && (i>=mid+mid/2))
                printf("* ");
            else if(i+j==mid+n && (i>=mid && j>=mid+mid/2))
                printf("* ");
            else if(i==j && (j>=mid+mid/2))
                printf("* ");
            else if(i==mid || i==n || i==1 || (j==1 && i>=mid) || (j==n && i>=mid))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 1;
}
