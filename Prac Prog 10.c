#include <stdio.h>
typedef struct
{
    int prod_code;
    char name[20];
    int qty;
    float price;
}PROD;

void add(PROD *p, int l);
void add(PROD *p, int l)
{
    int i;
    for(int i=0 ; i<l ; i++)
    {
        printf("For Product %d: \n",(i+1));
        printf("Enter Product Code: ");
        scanf("%d",&p[i].prod_code);
        printf("Enter Product Name: ");
        scanf("%s",p[i].name);
        printf("Enter Quantity: ");
        scanf("%d",&p[i].qty);
        printf("Enter Price: ");
        scanf("%f",&p[i].price);
        printf("\n\n");
    }
    printf("\n\n");
}

void calc(PROD *p, int m);
void calc(PROD *p, int m)
{
    int i;
    float total = 0;
    for(i=0 ; i<m ; i++)
        total = total+(p[i].qty * p[i].price);
    printf("Total Inventory Value = %f",total);
}

void display(PROD *p, int num);
void display(PROD *p, int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        printf("Details of Product %d: \n",(i+1));
        printf("Product Code: %d \n",p[i].prod_code);
        printf("Product Name: %s \n",p[i].name);
        printf("Quantity: %d \n",p[i].qty);
        printf("Price: %f \n\n",p[i].price);
    }
}

int main()
{
    int n, i, m;
    printf("How many Products?: ");
    scanf("%d",&n);
    printf("\n");

    PROD arr[n], *ptr;
    ptr = arr;

    add(ptr,n);
    display(ptr,n);
    calc(ptr,n);

    return 0;
}
