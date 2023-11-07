/*
insert delete serach preee in  post display
*/

#include <stdio.h>
#include <stdlib.h>

// creating the structure of a node of the tree
typedef struct Node
{
	int value;
	struct Node *left, *right;
} Node;

// to track the number of nodes
int nodeCount = 0;

// for creating the intial tree;
void create(Node *);

Node *setNode();

// for inserting a single node
Node *insertNode(Node *, int);

void inorder(Node *);

// for displaying user menu
void displayMenu();

int main()
{
	// root of the tree
	Node *root = NULL;

	int ch, value;
	while (1)
	{
		displayMenu();
		printf("\nEnter your choice:");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:

			printf("Enter the value:");
			scanf("%d", &value);
			if (root == NULL)
				root = insertNode(root, value);
			else
				insertNode(root, value);
			break;
		case 2:
			printf("\nINORDER: ");
			inorder(root);
			break;
		case 99:
			printf("Exiting.....");
			return 0;

		default:
			printf("\nInvalid choice!!!");
			break;
		}
	}
	return 0;
}

Node *setNode(int value)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->value = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

// for inserting a single node
Node *insertNode(Node *root, int value)
{
	if (root == NULL)
	{
		return setNode(value);
	}
	else if (value >= root->value)
	{
		root->right = insertNode(root->right, value);
	}
	else
	{
		root->left = insertNode(root->left, value);
	}
	return root;
}
void inorder(Node *root)
{

	if (root != NULL)
	{
		inorder(root->left);
		printf(" %d ", root->value);
		inorder(root->right);
	}
}
void displayMenu()
{
	printf("\n\tMENU");
	printf("\n1.Insert value");
	printf("\n2.Inorder traversal");
	printf("\n99.Exit");
}
