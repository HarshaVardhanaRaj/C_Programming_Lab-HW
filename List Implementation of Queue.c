#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue()
{
    int val;
    printf("Enter the value: ");
    scanf("%d", &val);
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("Queue Overflow\n");
        return;
    }
    newnode->data = val;
    newnode->next = NULL;

    if(front == NULL)
        front = rear = newnode;
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
    printf("Element enqueued successfully.\n");
}

void dequeue()
{
    if(front == NULL)
    {
        printf("Queue Underflow\n");
        return;
    }
    struct node *temp = front;
    printf("Deleted element: %d\n", front->data);
    front = front->next;
    free(temp);
    if(front == NULL)
        rear = NULL;
}

void peek()
{
    if(front == NULL)
    {
        printf("Queue is Empty\n");
        return;
    }
    printf("First element: %d\n", front->data);
}

void display()
{
    if(front == NULL)
    {
        printf("Queue is Empty\n");
        return;
    }
    struct node *temp = front;
    printf("Queue elements:\n");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int ch;
    printf("Linked List Implementation of Queue\n");

    while(1)
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: printf("Exiting..."); exit(0);
            default: printf("Invalid Input. Try Again.\n");
        }
    }
}
