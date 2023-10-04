// Queue operations - insert ,delete and display

#include <stdio.h>

// max size of the queue
#define SIZE 100
// declaing the queue,rear and front globally
int Q[SIZE], Rear = -1, Front = -1;

// for inserting into the queue
void inQ();
// for deleting from queue
void delQ();
// for printing the queue
void printQ();
// for making a simple UI
void line();

int main()
{
    int ch;
    while (1)
    {
        printf("\nMENU\n");
        printf("1.Insert to Queue\n");
        printf("2.Delete from Queue\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice  : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            inQ();
            break;
        case 2:
            delQ();
            break;
        case 3:
            printQ();
            break;
        case 4:
            printf("\nExiting...");
            return 0;
        default:
            printf("Invalid Option!!!..Please Try Again\n");
        }
    }
}

// for inserting into the queue
void inQ()
{
    line();
    int item;
    if (Rear == SIZE - 1)
    {
        printf("Overflow \n");
    }
    else
    {
        if (Front == -1)
        {
            Front = 0;
        }
        printf("\nEnter element to be inserted in the Queue: ");
        scanf("%d", &item);
        Rear += 1;
        Q[Rear] = item;
        printf("\nItem inserted successfully..");
    }
    line();
}
// for deleting from queue
void delQ()
{
    line();
    if (Front == -1 || Front > Rear)
    {
        printf("Underflow \n");
    }
    else
    {
        printf("%d deleted from the Queue.\n", Q[Front]);
        Front+= 1;
    }
    line();
}
// for printing the queue
void printQ()
{
    line();

    if (Front == -1 || Front > Rear)
    {

        printf("Empty Queue \n");
    }
    else
    {
        printf("Queue: ");
        for (int i = Front; i <= Rear; i++)
        {
            printf("%d ", Q[i]);
        }
    }
    line();
}

// for making a simple UI
void line()
{
    printf("\n********************************************************************************************\n");
}