#include <stdio.h>

int main()
{
    int n , i, j;
    printf("Enter value of n: ");
    scanf("%d",&n);

    int str = 1; //only 1 credential
    for(i=1 ; i<=n ; i++)
    {
        for(j=1; j<=str ; j++)
            printf("* ");

        if(i>=(n+1)/2)
            str--;
        else
            str++;

        printf("\n");
    }
}
