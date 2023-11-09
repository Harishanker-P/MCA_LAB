#include <stdio.h>

// set A, set B and set C and limit of set a is stored in nA and nB is the limit of set B and so on
int setA[10], setB[10], setC[30], nA, nB, nC;

// for reading two  disjoints sets A and B
void read();

// for
void unionSet();

// this function returns the parent element of a set if an item is present in that set else

void find();

int main()
{
    read();

    return 0;
}

void read()
{
    printf("\nEnter the limit of set A: ");
    scanf("%d", &nA);
    printf("Enter the elements of the disjoint set A:");
    for (int i = 0; i < nA; i++)
    {
        scanf("%d", &setA[i]);
    }

    printf("\nEnter the limit of set B: ");
    scanf("%d", &nB);
    printf("Enter the elements of the disjoint set A:");
    for (int i = 0; i < nB; i++)
    {
        scanf("%d", &setB[i]);
    }

    printf("set A:");
    for (int i = 0; i < nA; i++)
    {
        printf("%d", setA[i]);
    }
    printf("set B:");
    for (int i = 0; i < nB; i++)
    {
        printf("%d", setB[i]);
    }
}