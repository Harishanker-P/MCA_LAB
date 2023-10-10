#include <stdio.h>
#include <stdlib.h>
// creating structure of a doubly linked list
typedef struct Node
{
    int data;
    struct Node *prev, *next;
} Node;

// Head points to the first node

Node *head = NULL;

// for tracking the number of nodes
int nodeCount = 0;

// for creating a new node
Node *createNode();

// for creaing the first list
void create();

// for inserting in the begining of the list
void insertBeg();

// for inserting in a specific position
void insertPos();

// for deleting from a specific position
void deltePos();

// to sreach if an item is present in the lis or not
void search();

// displaying the list;
void display();
// line for a simple ui
void line();

int main()
{
    int ch;
    while (1)
    {
        // user menu
        printf("\n\tMENU\n1.Create\n2.Insert begining\n3.Insert Position\n4.delete Position\n5.Search\n6.display\n99.exit");

        printf("\n enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            insertBeg();
            break;
        case 3:
            insertPos();
            break;
        case 4:
            deltePos();
            break;
        case 5:
            search();
            break;
        case 6:
            display();
            break;
        case 99:
            printf("\nExiting....\n");
            return 0;

        default:
            printf("\nInvalid choice...Try again!!!\n");
            break;
        }
    }
    return 0;
}

// for creating a new node
Node *createNode()
{
    int data;
    Node *newNode = (Node *)(malloc(sizeof(Node)));
    printf("\nEnter the data: ");
    scanf("%d", &data);
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// for creaing the first list
void create()
{
    line();
    if (head == NULL)
    {
        int limit;
        Node *newNode, *temp;
        printf("Enter the number of Nodes: ");
        scanf("%d", &limit);
        for (int i = 1; i <= limit; i++)
        {

            newNode = createNode();
            if (i == 1)
            {

                head = newNode;
                temp = head;
            }
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
        nodeCount += limit;
        printf("\ndoubly linked list created..!!");
    }
    else
    {
        printf("Doubly Linked list already exits...cannot create a new one!!!");
    }
    line();
}

// for inserting in the begining of the list
void insertBeg()
{
    line();
    Node *newNode = createNode();
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    printf("new node instered successfully");
    nodeCount += 1;
    line();
}

// for inserting in a specific position
void insertPos()
{
    line();
    line();
}
// for deleting from a specific position
void deltePos()
{
    line();
    line();
}

// to sreach if an item is present in the lis or not
void search()
{
    line();
    if (head == NULL)
    {
        printf("Linked Stack is Empty!!!");
    }
    else
    {
        int item, isFound = 0, pos = 1;
        printf("\nEnter the item to search:");
        scanf("%d", &item);
        Node *temp;
        temp = head;
        while (temp != NULL)
        {
            if (item == temp->data)
            {
                printf("ITem found at Node : %d", pos);
                isFound = 1;
                break;
            }
            temp = temp->next;
            pos += 1;
        }
        if (!isFound)
        {
            printf("\nItem not found in the list");
        }
    }
    line();
}
// displaying the list;
void display()
{
    line();
    if (head == NULL)
    {
        printf("\nLinked list is empty.....!!\n");
    }
    else
    {
        Node *temp;
        temp = head;
        printf("[ START ]==>");
        while (temp != NULL)
        {
            printf("<-[x][ %d ][x]->", temp->data);
            temp = temp->next;
        }
        printf("[ NULL ]");

        printf("\n\nTotal Number of Nodes = %d ", nodeCount);
    }

    line();
}

// line for a simple ui
void line()
{
    printf("\n\n*****************************************************************************************************************\n\n");
}