#include <stdio.h>
typedef struct
{
    int model_no;
    char brand[20];
    int price;
    float mileage;
}CAR;

void display(CAR *p, int num, int min);
void display(CAR *p, int num, int min)
{
    int i;
    printf("The cars above the minimum price entered are: \n\n");
    for(i=0;i<num;i++)
    {
        if(p[i].price >= min)
        {
            printf("Option %d: \n",(i+1));
            printf("Model Number: %d \n",p[i].model_no);
            printf("Brand Name: %s \n",p[i].brand);
            printf("Price: %d \n",p[i].price);
            printf("Mileage: %f \n\n",p[i].mileage);
        }
    }
}

int main()
{
    int n, i, m;
    printf("How many Cars?: ");
    scanf("%d",&n);
    printf("\n");

    CAR arr[n], *ptr;
    ptr = arr;

    for(int i=0 ; i<n ; i++)
    {
        printf("For CAR %d: \n",(i+1));
        printf("Enter Model Number: ");
        scanf("%d",&arr[i].model_no);
        printf("Enter Brand Name: ");
        scanf("%s",arr[i].brand);
        printf("Enter Price: ");
        scanf("%d",&arr[i].price);
        printf("Enter Mileage: ");
        scanf("%f",&arr[i].mileage);
        printf("\n\n");
    }
    printf("\n\n");

    printf("Enter the minimum price to look for: ");
    scanf("%d",&m);

    display(ptr,n,m);

    return 0;
}
