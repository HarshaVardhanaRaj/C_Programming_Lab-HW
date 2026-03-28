#include <stdio.h>
int main()
{
    int n, i, val;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values in ascending order. \n");
    for (i=0;i<n;i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter the value to find: ");
    scanf("%d",&val);
    int l = 0, h = n-1, mid=(l+h)/2;
    while(l<h)
    {
        if(val<a[mid])
        {
            h=mid-1;
            mid=(l+h)/2;
        }
        if(val>a[mid])
        {
            l=mid+1;
            mid=(l+h)/2;
        }
        if(val==a[mid])
        {
            printf("Element is found at index %d.",mid);
            return 0;
        }
    }
    printf("Element is not found");
    return 0;
}
