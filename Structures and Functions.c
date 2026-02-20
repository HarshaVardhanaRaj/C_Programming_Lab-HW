#include <stdio.h>

struct BOOK
{
    char book_name[50];
    char author_name[50];
    float price;
};

struct BOOK add(struct BOOK b)
{
    printf("\nEnter details for book:\n");

    printf("Enter the book title: ");
    scanf(" %[^\n]", b.book_name);

    printf("Enter the author name: ");
    scanf(" %[^\n]", b.author_name);

    printf("Enter the book price: ");
    scanf("%f", &b.price);

    return b;
}

void display(struct BOOK b1)
{
    printf("\n----------BOOK INFORMATION------------\n\n");
    printf("BOOK TITLE: %s\n", b1.book_name);
    printf("AUTHOR: %s\n", b1.author_name);
    printf("PRICE: %.2f\n", b1.price);
}

int main()
{
    struct BOOK bk;

    bk = add(bk);
    display(bk);

    return 0;
}
