#include <stdio.h>
int main()
{
    int i, n, total = 0;

    printf("How many elements? : ");
    scanf("%d",&n);

    int arr[n];

    for(i=0 ; i<n ; i++)
    {
        printf("Enter element %d: ",(i+1));
        scanf("%d",&arr[i]);
    }

    for(i=0 ; i<n ; i++)
        total = total + arr[i];

    printf("Total sum: %d\n",total);
    return 0;
}
