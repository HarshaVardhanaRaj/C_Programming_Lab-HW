#include <stdio.h>
#include <stdlib.h>
#define size 10

int Q[size];
int front=-1, rear=-1;

void enqueue()
{
    int val;
    if(rear == size-1)
    {
        printf("Queue Overflow");
        return;
    }
    printf("Enter the value to be entered: ");
    scanf("%d",&val);
    if(front == -1)
        front = 0;
    rear++;
    Q[rear] = val;
    printf("Element added succesfully.");
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow");
        return;
    }
    printf("The value deleted is: %d",Q[front]);
    front++;
}

void peek()
{
    if(front==-1 || rear==-1)
    {
        printf("No elements in Queue to Display.");
        return;
    }
    printf("The peek (first) value is: %d",Q[front]);
}

void display()
{
    if(front==-1 || rear==-1)
    {
        printf("No elements in Queue to Display.");
        return;
    }
    int temp=front;
    printf("The values in the Queue are: \n");
    while(temp<rear)
    {
        printf("%d - ",Q[temp]);
        temp++;
    }
    printf("%d",Q[rear]);
}

int main()
{
    int ch;
    printf("Array Implementation of Queue");
    while(1)
    {
        printf("\n\n1. Enqueue \n2. Dequeue \n3. Peek \n4. Display \n5. Exit \n\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting the program...");
                exit(0);
            default:
                printf("Invalid Input. Try Again.");
        }
    }
}
