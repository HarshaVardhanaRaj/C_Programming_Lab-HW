#include <stdio.h>
int main()
{
    int n , i, j;
    printf("Enter value of n: ");
    scanf("%d",&n);

    int mid=(n+1)/2, sp=mid-1, str = 1;

    for(i=1 ; i<=n ; i++)
    {
        for(j=1; j<=sp ; j++)
            printf("  ");

        for(j=1; j<=str ; j++)
            printf("* ");

        if(i>=mid)
        {
            sp++;
            str-=2;
        }
        else
        {
            sp--;
            str+=2;
        }
        printf("\n");
    }
}
