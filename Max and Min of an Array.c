#include <stdio.h>
void main()
{
    int arr[10], i;

    for(i=0 ; i<10 ; i++)
    {
        printf("Enter value %d: ",(i+1));
        scanf("%d",&arr[i]);
    }

    int max = arr[0], min=arr[0];

    for(i=0 ; i<10 ; i++)
    {
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];
    }

    printf("Max = %d\n",max);
    printf("Min = %d\n",min);
}
