// Circular Queue

#include <stdio.h>

#define SIZE 5

int Q[SIZE];
int front = -1, rear = -1;

// Check if the queue is full
int isFull();

// Check if the queue is empty
int isEmpty();

// Adding an element
void enQueue();

// Removing an element
int deQueue();

// Display the queue
void display();

// line for a simple ui
void line();

int main()
{

    int ch;
    while (1)
    {
        printf("\nMENU\n1.Insert\n2.Delete\n3.Display\n99.exit\n");
        printf("Enter the choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 99:
            return 0;
            break;

        default:
            printf("invalid choice!!!");
            break;
        }
    }
    return 0;
}

int isFull()
{
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
    {

        return 1;
    }
    return 0;
}
// Check if the queue is empty
int isEmpty()
{
    if (front == -1)
    {
        return 1;
    }
    return 0;
}
// Adding an element
void enQueue()
{
    line();
    if (isFull())
    {

        printf("\n Queue is full!! \n");
    }
    else
    {
        int element;
        printf("Enter the element: ");
        scanf("%d", &element);
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        Q[rear] = element;
        printf("\n Inserted -> %d", element);
    }
    line();
}

// Removing an element
int deQueue()
{
    line();
    int element;
    if (isEmpty())
    {
        printf("\n Queue is empty !! \n");
        return (-1);
    }
    else
    {
        element = Q[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        // Q has only one element, so we reset the
        // queue after dequeing it. ?
        else
        {
            front = (front + 1) % SIZE;
        }
        printf("\n Deleted element -> %d \n", element);
        return (element);
    }
    line();
}

// Display the queue
void display()
{
    line();
    int i;
    if (isEmpty())
        printf(" \n Empty Queue\n");
    else
    {
        printf("\n Front -> %d ", front);
        printf("\n items -> ");
        for (i = front; i != rear; i = (i + 1) % SIZE)
        {
            printf("[item=%d,i=%d]", Q[i],i);
        }
        printf("[item=%d,i=%d]", Q[i],i);
        printf("\n Rear -> %d \n", rear);
    }
    line();
}


// line for a simple ui
void line()
{
    printf("\n\n*****************************************************************************************************************\n\n");
}
