#include <stdio.h>

void RangeSum (int n, int A[], int r, int c, int B[r][c])
{
    int ans[r], sum=0, i, j, start, end;
    for(i=0 ; i<r ; i++)
    {
        start = B[i][0]-1;
        end = B[i][1]-1;
        for(j=start ; j<=end ; j++)
            sum = sum+A[j];
        printf("Sum of runs for query %d = %d\n",(i+1),sum);
        sum=0;
    }
}

int main()
{
    int n;

    printf("How many balls?: ");
    scanf("%d",&n);
    int A[n];

    printf("Enter the score for %d balls: \n",n);
    for(int i=0 ; i<n ; i++)
        scanf("%d",&A[i]);

    int r;
    printf("How many queries?: ");
    scanf("%d",&r);
    int B[r][2];

    for(int i=0 ; i<r ; i++)
    {
        printf("For Query %d, enter start and end ball: ",i+1);
        scanf("%d %d",&B[i][0],&B[i][1]);
    }

    RangeSum(n,A,r,2,B);
}
