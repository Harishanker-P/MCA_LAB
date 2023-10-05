// Linked list 

#include <stdio.h>
#include <stdlib.h>

// creating a structure of the linked list
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// head node points to the first node
Node *head = NULL;

// for tracking the total number of nodes
int nodecount = 0;

// creating a linked list
void create();
// creating a new node
Node *createNode(int);
// insert a node at the beggning
void insertBeg();
// insert a node at a specific posistion
void insertPos();
// delte a node at a specific posistion
void deltePos();
// to sreach if an item is present in the lis or not
void search();
// display the entrire linked list
void display();
// just a line for creating a ui
void line();

int main()
{
    int ch;
     // user menu
        printf("\n\tMENU\n1.Create\n2.Insert begining\n3.Insert Position\n4.delete Position\n5.Search\n6.display\n99.exit");
    while (1)
    {
       
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
            break;
        }
    }
    return 0;
}

// creating a linked list
void create()
{
    line();
    if (head == NULL)
    {
        int n, data;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        Node *newNode, *temp;

        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                printf("\nenter the data: ");
                scanf("%d", &data);
                newNode = createNode(data);
                head = newNode;
                temp = head;
            }
            else
            {

                printf("\nEnter the data: ");
                scanf("%d", &data);
                newNode = createNode(data);
                temp->next = newNode;
                temp = newNode;
            }
        }
        temp->next = NULL;
        nodecount += n;
        printf("\nLinked list created successfully...\n");
    }
    else
    {
        printf("\nLinked list alredy Exsits....!!!]\n");
    }
    line();
}

// creating a new node
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// insert a node at the beggning
void insertBeg()
{
    line();

    int data;
    printf("\nEnter the data: ");
    scanf("%d", &data);
    Node *newNode = createNode(data);
    newNode->next = head;
    head = newNode;
    nodecount += 1;
    printf("\nNode added successfully.......\n");

    line();
}
// insert a node at a specific posistion
void insertPos()
{
    line();
    int pos = 0, data;
    printf("\nEnter the position:");
    scanf("%d", &pos);

    if (pos > 0 && pos <= nodecount)
    {
        Node *temp, *newNode;
        printf("\nEnter the data");
        scanf("%d", &data);
        newNode = createNode(data);
        if (pos == 1)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            temp = head;
            for (int i = 1; i < pos - 1; i++)
            {
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }
        nodecount += 1;
        printf("Node added successfully!!!!");
    }
    else
    {
        printf("invlid position...Try again");
    }

    line();
}
// delte a node at a specific posistion
void deltePos()
{
    line();
    if (head == NULL)
    {
        printf("linked list emtpy!!!");
    }
    else
    {
        int pos;
        printf("enter the position to be deleted: ");
        scanf("%d", &pos);
        if (pos > 0 && pos <= nodecount)
        {
            struct Node *temp, *nodeAtPos;
            if (pos == 1)
            {
                nodeAtPos = head;
                head = nodeAtPos->next;
            }
            else
            {
                temp = head;
                for (int i = 1; i < pos - 1; i++)
                {
                    temp = temp->next;
                }

                nodeAtPos = temp->next;
                temp->next = nodeAtPos->next;
            }
            free(nodeAtPos);
            printf("\nNode Deleted sucessfully!!!!");
            nodecount -= 1;
        }
        else
        {
            printf("\nEnter a valid position!!!");
        }
    }
    line();
}

// to sreach if an item is present in the lis or not
void search()
{
    line();
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
    line();
}
// display the entrire linked list
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
            printf("[ %d ][ x-]-->", temp->data);
            temp = temp->next;
        }
        printf("[ NULL ]");

        printf("\n\nTotal Number of Nodes = %d ", nodecount);
    }

    line();
}
// just a lineus for creating a ui
void line()
{
    printf("\n\n*****************************************************************************************************************\n\n");
}
