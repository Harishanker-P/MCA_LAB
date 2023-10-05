// Linked stack

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


// creating a new node
Node *createNode(int);

// insert a node at the beggning of the linked stack
void push();

//for deleting a node at the beggning of the linked stack
void pop();

// display the linked stack
void display();

// just a line for creating a UI
void line();


int main()
{
    int ch;
     // user menu
     
    while (1)
    {
          printf("\n\tLINKED STACK MENU\n1.Push\n2.Pop\n3.display\n99.exit");
        printf("\n enter your choice: ");
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
        case 99:
            printf("\nExiting....\n");
            return 0;

        default:
        	printf("\nInvlid option Please enter a Valid option....\n");
            break;
        }
    }
    return 0;
}

// creating a new node
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// insert a node at the beggning of the linked stack
void push()
{
    line();

    int data;
    printf("\nEnter the data: ");
    scanf("%d", &data);
    Node *newNode = createNode(data);
   if(head==NULL)
   {
   	head=newNode;
   }
   else
   {
   	 newNode->next = head;
  	  head = newNode;
   }
   nodecount += 1;
    printf("\nNode pushed to stack.......\n");

    line();
}


//for deleting a node at the beggning of the linked stack
void pop()
{
	line();
	if(head==NULL)
	{
		printf("UnderFlow...Linked stack is empty....");
				
	}	
	else
	{
		Node *delNode;
		delNode=head;
		head=delNode->next;
		printf("%d poped out of linked stack",delNode->data);
		free(delNode);
	}
	line();
}

// display the entrire linked list
void display()
{
    line();

    if (head == NULL)
    {
        printf("\nLinked stack is empty.....!!\n");
    }
    else
    {
        Node *temp;
        temp = head;
        printf("[ TOP]==>");
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
