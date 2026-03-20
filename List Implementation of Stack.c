#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL; //GLOBAL

void push()
{
    struct node *newnode;
    int val;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("Stack Overflow\n");
        return;
    }
    printf("Enter the value: ");
    scanf("%d", &val);
    newnode -> data = val;
    newnode -> next = top;
    top = newnode;
    printf("Element pushed successfully.\n");
}

void pop()
{
    if(top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }
    struct node *temp = top;
    printf("Deleted element: %d\n", top->data);
    top = top->next;
    free(temp);
}

void peek()
{
    if(top == NULL)
    {
        printf("Stack is Empty\n");
        return;
    }
    printf("Top element: %d\n", top->data);
}

void display()
{
    if(top == NULL)
    {
        printf("Stack is Empty\n");
        return;
    }
    struct node *temp = top;
    printf("Stack elements:\n");
    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
