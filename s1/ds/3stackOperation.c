// Stack operations - push ,pop and display

#include <stdio.h>

// size of the stack
#define SIZE 5

// declaring stk top  globally
int stk[SIZE], top = -1;

// for inserting/pushing item to stack
void push();

// for deleting/poping item out of stack
void pop();

// for printing/displaying the entire stack
void display();

// for making a simple UI
void line();

int main()
{
    int ch;

    while (1)
    {
        printf("\n\tSTACK OPERATION MENU");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nExiting...");
            return 0;

        default:
            printf("\nInvalid choice!!");
        }
    }
}

// for inserting/pushing item to stack
void push()
{
    line();

    int item;

    if (top == SIZE - 1)
    {
        printf("\nOverflow!!!");
    }
    else
    {
        printf("\nEnter the element to be added: ");
        scanf("%d", &item);
        top += 1;
        stk[top] = item;
        printf("\nItem successfully pushed onto stack.");
    }
    line();
}

// for deleting/poping item out of stack
void pop()
{
    line();
    if (top == -1)
    {
        printf("\nUnderflow!!!!");
    }
    else
    {
        printf("\n%d Popped Out of stack", stk[top]);
        top -= 1;
    }
    line();
}

// for printing/displaying the entire stack
void display()
{
    line();
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            if (i == top)
            {
                printf("%d <--top", stk[i]);
            }
            else
            {
                printf("\n%d", stk[i]);
            }
    }
    line();
}

// for making a simple UI
void line()
{
    printf("\n********************************************************************************************\n");
}