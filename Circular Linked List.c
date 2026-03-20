#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *header = NULL;
    struct node *last = NULL;

    int n, val;
    printf("How many values to enter?: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter value of element (%d/%d): ", i+1, n);
        scanf("%d", &val);

        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        newnode -> data = val;
        newnode -> next = NULL;

        if(header == NULL)
        {
            header = newnode;
            last = newnode;
            last -> next = header;
        }
        else
        {
            last -> next = newnode;
            last = newnode;
            last -> next = header;
        }
    }

    if(header != NULL)
    {
        struct node *temp = header;
        printf("Circular linked list: ");
        do
        {
            printf("%d -> ", temp -> data);
            temp = temp->next;
        }
        while(temp != header);
        printf("%d\n",temp -> data);
    }
    return 0;
}
