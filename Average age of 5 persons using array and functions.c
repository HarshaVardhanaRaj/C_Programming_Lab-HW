#include <stdio.h>
float age(int arr[]);
float age(int arr[])
{
    int s = 0, i;
    for(i=0 ; i<5 ; i++)
        s = s + arr[i];
    return (s/5.0);
}

void main()
{
    int a[5], i;
    for (i=0 ; i<5 ; i++)
    {
        printf("Enter the age of Person %d: ",(i+1));
        scanf("%d",&a[i]);
    }

    float result = age(a);
    printf("Average age = %f\n",result);
}
