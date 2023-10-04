//Array operations- insertion, deletion and display.

#include <stdio.h>
// declaring an array and its size
int arr[100], size = 0;

// for creating array
void create();

// for inserting an item to a specific position
void inPos();

// for deleting an item on a specific position
void delPos();

// for displaying arr
void display();

// for for making a simple UI
void line();

int main()
{

    while (1)
    {
        // Menu
        int choice;
        printf("\nArray Operations Menu:\n");
        printf("1. Create an array\n");
        printf("2. Insert element at a specific position\n");
        printf("3. Delete element at a specific position\n");
        printf("4. Display the array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Create an array
            create();
            break;
        case 2:
            // Insert element at a specific position
            inPos();
            break;
        case 3:
            // Delete element at a specific position
            delPos();
            break;
        case 4:
            // Display the array
            display();
            break;
        case 5:
            // Exit the program
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// for creating array
void create()
{
    line();
    if (size > 0)
    {
        printf("\nArray already exists!!!\n");
    }
    else
    {
        printf("Enter the size of the array: ");
        scanf("%d", &size);
        printf("Enter %d elements:\n", size);
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("\nArray created!!!\n");
    }
    line();
}

// for inserting an item to a specific position
void inPos()
{

    line();
    int pos, element;
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > size + 1)
    {
        printf("Invalid position!\n");
    }
    else
    {
        printf("Enter the element to insert: ");
        scanf("%d", &element);

        // Shift elements to the right
        for (int i = size; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = element;
        size++;
        printf("Element inserted successfully.\n");
    }
    line();
}
// for deleting an item on a specific position
void delPos()
{
    line();
    if (size > 0)
    {
        int pos;
        printf("Enter the position to delete: ");
        scanf("%d", &pos);
        if (pos < 1 || pos > size)
        {
            printf("Invalid position!\n");
        }
        else
        {
            // Shift elements to the left
            for (int i = pos - 1; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;
            printf("Element deleted successfully.\n");
        }
    }
    else
    {
        printf("Array is empty. Deletion not possible.\n");
    }
    line();
}

// for displaying arr
void display()
{
    line();
    if (size == 0)
    {
        printf("\nArray is empty!!!");
    }
    else
    {
        printf("Array elements: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d  ", arr[i]);
        }
    }

    line();
}

// for for making a simple UI
void line()
{
    printf("\n********************************************************************************************\n");
}