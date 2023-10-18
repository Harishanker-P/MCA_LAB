#include <stdio.h>
// gobal array and number of elements
int arr[100], n = 0;

// reading the element of the array
int readArray();

// display the current array;
void display();



// to perform linear search
void linear();

// to perform binary search
void binary();

// for creating a simple ui
void line();

int main()
{
    int ch;

    while (1)
    {
        printf("\nMENU\n1.READ ARRAY\n2.DISPLAY\n3.LINEAR SEARCH\n4.BINARY SEARCH\n99.EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            readArray();
            break;
        case 2:
            display();
            break;
        case 3:
            linear();
            break;
        case 4:
            binary();
            break;
        case 99:
            printf("Exiting......");
            return 0;

        default:
            printf("Invlid choice!!!");
            break;
        }
    }
    return 0;
}

// reading the element of the array
int readArray()
{
    line();
    if (n != 0)
    {
        char ow;
        printf("Do you want to overwrite the existing array?(y/n): ");
        scanf("%s", &ow);
        if (ow == 'y' || ow == 'Y')
        {
            printf("\nOverwriting.....\n");
        }
        else
        {
            printf("\n.............\n");
            return 0;
        }
    }
    printf("Enter the limit:");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    line();
}

// display the current array;
void display()
{
    line();
    if (n != 0)
    {
        printf("The array is: ");
        for (int i = 0; i < n; i++)
        {
            printf(" %d ", arr[i]);
        }
    }
    else
    {
        printf("array is empty!!");
    }
    line();
}
// to perform linear search
void linear()
{
    line();
    if (n != 0)
    {
        int item, isFound = 0;
        printf("enter the item to search:");
        scanf("%d", &item);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == item)
            {
                printf("Item found at pos %d!!!", i + 1);
                isFound = 1;
                break;
            }
        }
        if (!isFound)
        {
            printf("Item Not Found!!");
        }
    }
    else
    {
        printf("Array is empty!!");
    }

    line();
}
// to perform binary search
void binary()
{
    line();
    if (n != 0)
    {
        int item;
        printf("Enter the item:");
        scanf("%d", &item);

        // sorting the array to perform binary search
        int *temp = arr;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        int lb = 0, ub = n - 1, mid, flag = 0;
        while (lb <= ub)
        {

            mid = (lb + ub) / 2;
            if (item == temp[mid] || item == temp[1])
            {
                printf("item found");
                flag = 1;
                break;
            }
            else if (temp[mid] < item)
            {
                lb = mid + 1;
            }
            else
            {
                ub = mid - 1;
            }
        }
        if (!flag)
        {
            printf("Item not found");
        }
    }
    else
    {
        printf("Array is empty!!");
    }
    line();
}

// line for a simple ui
void line()
{
    printf("\n\n**********************************************************************************\n\n");
}
