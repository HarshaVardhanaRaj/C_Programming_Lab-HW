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
    struct book textbook;

    printf("\nEnter details for book:\n");
    printf("Enter the book title: ");
    scanf(" %s", textbook.book_name);
    printf("Enter the author name: ");
    scanf(" %s", textbook.author_name);
    printf("Enter the book price: ");
    scanf("%f", &textbook.price);


    printf("\n----------BOOK INFORMATION------------\n\n");
    printf("BOOK TITLE: %s\n", textbook.book_name);
    printf("AUTHOR: %s\n", textbook.author_name);
    printf("PRICE: %.2f\n", textbook.price);

    return 0;
}
