// mergging two sorted arrays
// arr1=>1st sorted array of size1
// arr2=>2nd sorted array of size2
// arr3=>sorted array from mergging arr1+arr2 of size1+size2

#include <stdio.h>
int main()
{

    int size1, size2, size3;
    // reading 1st SORTED ARRAY
    printf("\nenter the size of the 1st sorted Array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("\nEnter the elements of 1st Sorted Array: ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // reading 2nd SORTED ARRAY
    printf("\nenter the size of the 2nd Sorted array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("\nEnter the elements of 2nd Sorted Array: ");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // for mergging the 2 sorted arrays to the 3rd array
    int i = 0, j = 0, k = 0, arr3[size1 + size2];
    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < size1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    // printing the merged array;
    size3 = k; // or size1+size2
    printf("The merged sorted array is: ");
    for (int i = 0; i < size3; i++)
    {
        printf("%d ", arr3[i]);
    }
}