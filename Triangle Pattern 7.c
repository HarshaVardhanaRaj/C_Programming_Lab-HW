#include <stdio.h>

int main()
{
    int n , i, j;
    printf("Enter value of n: ");
    scanf("%d",&n);

    int mid=(n+1)/2, sp=mid, str=1; //only 1 credential
    for(i=1 ; i<=n ; i++)
    {
        for(j=1; j<=sp ; j++)
        {
            if(i==mid)
                printf("* ");
            else
                printf("  ");
        }

        for(j=1; j<=str ; j++)
            printf("* ");

        if(i<mid)
            str++;
        else
            str--;

        printf("\n");
    }
}
