#include <stdio.h>
int main()
{
    float price;
    int qty;

    printf("Enter Laptop price: ");
    scanf("%f",&price);
    printf("Enter quantity: ");
    scanf("%d",&qty);

    float gst = 0.18*price;
    float total = qty*(gst+price);

    printf("Laptop Unit Price \t Quantity \t GST Amount \t Total Cost");
    printf("\n---------------------------------------------------------------------\n");
    printf("%f \t\t %d \t\t %f \t\t %f",price,qty,gst,total);

    return 0;
}
