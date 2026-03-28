#include <stdio.h>
int main()
{
    int n, i, val;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter values %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter an element to search: ");
    scanf("%d",&val);
    for(i=0;i<n;i++)
    {
        if(a[i]==val)
        {
            printf("Element Found at index %d.",i);
            return 0;
        }
    }
    printf("Element not found.");
    return 0;
}
