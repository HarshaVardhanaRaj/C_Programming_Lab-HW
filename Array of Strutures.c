#include <stdio.h>

struct book
{
    char book_name[50];
    char author_name[50];
    float price;
};

int main()
{
    int i, n;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct book books[50];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for book %d:\n", i + 1);

        printf("Enter the book title: ");
        scanf(" %s", books[i].book_name);

        printf("Enter the author name: ");
        scanf(" %s", books[i].author_name);

        printf("Enter the book price: ");
        scanf("%f", &books[i].price);
    }

    printf("\n----------BOOK INFORMATION------------\n");
    for (i = 0; i < n; i++)
    {
        printf("\nBook %d:\n", i + 1);
        printf("BOOK TITLE: %s\n", books[i].book_name);
        printf("AUTHOR: %s\n", books[i].author_name);
        printf("PRICE: %.2f\n", books[i].price);
    }

    return 0;
}
