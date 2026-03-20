#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

void create(int n, struct node* L)
{
    struct node *newnode, *temp;
    int item;
    temp = L;
    for(int i = 0; i < n; i++) {
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("Enter element %d: ", i + 1);
        scanf("%d", &item);

        newnode -> data = item;
        newnode -> next = NULL;
        newnode -> prev = temp;

        temp -> next = newnode;
        temp = newnode;
    }
}

void display(struct node* L)
{
    struct node* temp = L -> next;
    printf("Elements in the List: ");
    printf("NULL <-> ");
    if(temp == NULL)
    {
        printf("NULL   ie. List is Empty\n");
        return;
    }
    while(temp != NULL)
    {
        printf("%d", temp -> data);
        if(temp -> next != NULL)
            printf(" <=> ");
        temp = temp -> next;
    }
    printf(" <=> NULL\n");
}

int IsEmpty(struct node* L)
{
    return (L -> next == NULL);
}

int IsLast(struct node* p)
{
    return (p -> next == NULL);
}

struct node* find(int x, struct node* L)
{
    struct node* temp = L -> next;

    while(temp != NULL)
    {
        if(temp -> data == x)
            return temp;
        temp = temp -> next;
    }
    return NULL;
}

void insert(int x, struct node* p)
{
    if(p == NULL)
    {
        printf("Invalid position\n");
        return;
    }

    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode -> data = x;

    newnode -> next = p -> next;
    newnode -> prev = p;

    if(p -> next != NULL)
        p -> next -> prev = newnode;

    p -> next = newnode;
}

void del(int x, struct node* L)
{
    struct node* temp = L -> next;

    while(temp != NULL)
    {
        if(temp -> data == x)
        {
            if(temp -> prev != NULL)
                temp -> prev -> next = temp -> next;
            if(temp -> next != NULL)
                temp -> next -> prev = temp -> prev;
            free(temp);
            printf("Element deleted\n");
            return;
        }
        temp = temp -> next;
    }
    printf("Element not found\n");
}

int main()
{
    int ch, data, n, x;
    struct node* L = (struct node*) malloc(sizeof(struct node));
    L -> next = NULL;
    L -> prev = NULL;

    struct node* p;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    do
    {
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. IsEmpty");
        printf("\n4. IsLast");
        printf("\n5. Find");
        printf("\n6. Insert");
        printf("\n7. Delete");
        printf("\n8. Quit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);
        printf("\n");

        switch(ch)
        {
            case 1:
                create(n, L);
                break;

            case 2:
                display(L);
                break;

            case 3:
                if(IsEmpty(L)==1)
                    printf("List is Empty\n");
                else
                    printf("List is Not Empty\n");
                break;

            case 4:
                printf("Enter element to check: ");
                scanf("%d", &x);
                p = find(x, L);

                if(p != NULL && IsLast(p))
                    printf("It is the last node\n");
                else
                    printf("It is not the last node\n");
                break;

            case 5:
                printf("Enter element to find: ");
                scanf("%d", &x);

                p = find(x, L);

                if(p != NULL)
                    printf("Element found\n");
                else
                    printf("Element not found\n");
                break;

            case 6:
                printf("Enter element after which it must be inserted: ");
                scanf("%d", &x);

                p = find(x, L);
                if(p != NULL)
                {
                    printf("Enter new element: ");
                    scanf("%d", &data);
                    insert(data, p);
                } else
                    printf("Element not found\n");
                break;

            case 7:
                printf("Enter element to delete: ");
                scanf("%d", &x);
                del(x, L);
                break;

            case 8:
                printf("Exiting the program...");
                return 0;

            default:
                printf("Invalid Choice. Try again.\n");
        }

    }
    while(ch != 8);
}
