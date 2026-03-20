#include <stdio.h>
#include <stdlib.h>
#define size 10

void push(int stack[], int *top)
{
    if(*top == size - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    int val;
    printf("Enter the value to be entered: ");
    scanf("%d", &val);
    (*top)++;
    stack[*top] = val;
    printf("Element added successfully.\n");
}

void pop(int stack[], int *top)
{
    if(*top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    printf("The value deleted is: %d\n", stack[*top]);
    (*top)--;
}

void peek(int stack[], int *top)
{
    if(*top == -1)
    {
        printf("Stack is Empty.\n");
        return;
    }
    printf("The peek (top) value is: %d\n", stack[*top]);
}

void display(int stack[], int *top)
{
    if(*top == -1)
    {
        printf("Stack is Empty.\n");
        return;
    }
    int temp = *top;
    printf("The values in the Stack are:\n");
    while(temp >= 0)
    {
        printf("%d\n", stack[temp]);
        temp--;
    }
}

int main()
{
    int ch, stack[size], top = -1;
    printf("Array Implementation of Stack");

    while(1)
    {
        printf("\n\n1. Push \n2. Pop \n3. Peek \n4. Display \n5. Exit \n\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                push(stack, &top);
                break;
            case 2:
                pop(stack, &top);
                break;
            case 3:
                peek(stack, &top);
                break;
            case 4:
                display(stack, &top);
                break;
            case 5:
                printf("Exiting the program...");
                exit(0);
            default:
                printf("Invalid Input. Try Again.");
        }
    }
}
