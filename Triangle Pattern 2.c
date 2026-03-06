#include <stdio.h>

int main()
{
    int n , i, j, str;
    printf("Enter value of n: ");
    scanf("%d",&n);
    str = n;
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=str ; j++)
        {
            printf("* ");
        }
        str--;
        printf("\n");
    }
}
