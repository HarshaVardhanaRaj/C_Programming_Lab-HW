#include <stdio.h>
typedef struct
{
    char name[20];
    char author[20];
    float price;
    int pages;
}BOOK;

int main()
{
    int n, i;
    printf("How many books?: ");
    scanf("%d",&n);
    printf("\n");

    BOOK arr[n];

    for(int i=0 ; i<n ; i++)
    {
        printf("For Book %d: \n",(i+1));
        printf("Enter Book Name: ");
        scanf("%s",arr[i].name);
        printf("Enter Author's Name: ");
        scanf("%s",arr[i].author);
        printf("Enter Price: ");
        scanf("%f",&arr[i].price);
        printf("Enter No. of Pages: ");
        scanf("%d",&arr[i].pages);
        printf("\n\n");
    }
    printf("\n\n");

    for(int i=0 ; i<n ; i++)
    {
        printf("Details of Book %d: \n",(i+1));
        printf("Book Name: %s\n",arr[i].name);
        printf("Author's Name: %s\n",arr[i].author);
        printf("Price: %f\n",arr[i].price);
        printf("No. of Pages: %d\n\n",arr[i].pages);
    }
    return 0;
}

