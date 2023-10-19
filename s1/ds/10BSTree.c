#include<stdio.h>

//creating the structure of a node of the tree
typedef struct Node
{
	int value;
	struct Node *left=NULL,right=NULL;
}Node;

//root of the tree
Node root =NULL;

//to track the number of nodes
int nodeCount=0;


//for creating the intial tree;

int create()
{
	if(root!=NULL)
	{
		int n;
		printf("\nEnter the number of nodes:");
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			insertNode();
		}
		nodeCount+=n;
		printf("tree created successfully...");
	}
	else
	{
		printf("Tree already exits try inserting a new node!!!");
	}
}

struct* setNode()
{
	int value
	printf("Enter the value: ");
	scanf("%d",&value);
	Node newNode=(Node *)malloc(sizeof(Node));
	newNode->value=value;
				
	
}
//for inserting a single node
void  insertNode()
{
	int value;

}

int main()
{
	
	return 0;
}

