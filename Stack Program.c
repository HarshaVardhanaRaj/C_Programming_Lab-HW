#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push();
void pop();
void peek();
void display();

void push()
{
    int val;

    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter value to push: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
        printf("Element inserted\n");
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element: %d\n", stack[top]);
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements:\n");
        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}


int main()
{
    int ch;
    do
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
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
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while(ch != 5);
    return 0;
}
