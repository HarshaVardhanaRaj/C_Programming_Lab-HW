#include <stdio.h>
int main()
{
    int i, j, temp, n;

    printf("Enter the no. of values: ");
    scanf("%d",&n);

    int A[n], mid=(n+1)/2;

    printf("Enter the values in the array: \n");
    for(i=0 ; i<n ; i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&A[i]);
    }

    for(i=0,j=n-1 ; i<mid,j>=mid ; i++,j--)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    for(i=0 ; i<n ; i++)
        printf("%d ",A[i]);
}
