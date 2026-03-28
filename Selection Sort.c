#include <stdio.h>
int main()
{
    int n, i, j, val, min, temp;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter values %d: ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[min])
                min =j;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("After sorting: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
