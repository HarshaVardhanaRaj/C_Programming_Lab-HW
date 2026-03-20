#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int main()
{
    struct node *L = (struct node*)malloc(sizeof(struct node));
    L -> data = 0;
    L -> next = NULL;
    L -> prev = NULL;

    struct node *temp = L;

    int n, i = 0, val;
    printf("How many values to enter?: ");
    scanf("%d", &n);

    while(i < n)
    {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter value of element (%d/%d): ", i+1, n);
        scanf("%d", &val);
        newnode -> data = val;
        newnode -> next = NULL;
        newnode -> prev = temp;
        temp -> next = newnode;
        temp = newnode;
        i++;
    }

    temp = L -> next;
    printf("Doubly linked list: ");
    for(i=0 ; i<n-1 ; i++)
    {
        printf("%d <=> ", temp -> data);
        temp = temp -> next;
    }
    printf("%d\n", temp -> data);
    return 0;
}
