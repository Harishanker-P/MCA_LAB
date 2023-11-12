// without declaring an array globally

#include <stdio.h>
#include <stdlib.h>

// reading the element of the array
int *readArray(int);

// display the current array;
void display(int *, int);

// to perform binary search
void binary(int *, int);

// to perform linear search
void linear(int *arr, int n);

// for creating a simple ui
void line();

int main()
{

    // array and number of elements
    int *arr, n = 0;

    // for switch
    int ch;

    while (1)
    {

        printf("\nMENU\n1.READ ARRAY\n2.DISPLAY\n3.LINEAR SEARCH\n4.BINARY SEARCH\n99.EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (n == 0)
            {
                printf("Enter the limit: ");
                scanf("%d", &n);
                arr = readArray(n);
            }
            else
            {
                char ow;
                printf("Do you want to overwrite the existing array?(y/n): ");
                scanf("%s", &ow);
                if (ow == 'y' || ow == 'Y')
                {
                    printf("\nOverwriting.....\n");
                    printf("Enter the limit: ");
                    scanf("%d", &n);
                    free(arr);
                    arr = readArray(n);
                }
                else
                {
                    printf("\n Operation cancelled...\n");
                }
            }

            break;
        case 2:
            display(arr, n);
            break;
        case 3:
            linear(arr, n);
            break;
        case 4:
            binary(arr, n);
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
int *readArray(int n)
{
    line();
    // this is kind of the rigth method since it allocates only the needed space
    int *arr = (int *)malloc(n * sizeof(int));

    // this also work but you have to provide a constant size which willl techincally waste a lot of memory and also since we are providing a constant size we cant store more elements than the constant size
    // static int arr[100];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArry created sucessfully...!!");
    return arr;
    line();
}

// display the current array;
void display(int *arr, int n)
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
// to perform binary search
void binary(int *arr, int n)
{
    line();
    if (n != 0)
    {
        int item;
        printf("Enter the item:");
        scanf("%d", &item);

        // sorting the array to perform binary search
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
            if (item == arr[mid] || item == arr[1])
            {
                printf("item found at %d", mid + 1);
                flag = 1;
                break;
            }
            else if (arr[mid] < item)
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

/// to perform linear search
void linear(int *arr, int n)
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
// line for a simple ui
void line()
{
    printf("\n\n**********************************************************************************\n\n");
}
