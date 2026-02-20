#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number of items: ");
    scanf("%d",&n);

    float price[n], total=0;
    printf("Enter the prices of %d items: ",n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%f",&price[i]);
        total = total + price[i];
    }
    printf("Total Bill Amount: %f",total);

    return 0;
}
