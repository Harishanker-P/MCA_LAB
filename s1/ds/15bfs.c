#include <stdio.h>

// Graph G with V vertices
int G[10][10] = {0}, V;
int Visted[10][10], Q[10];

void read()
{
    printf("Enter the number of vertices: ");
    scanf("%d", &V);
    printf("Input the adjaceny matirx: \n");
    printf("if (i,j) has an edge then input 1 else 0\n");
    
    for (int i = 0; i < V; i++)
    {
        for (int j = i; j < V; j++)
        {
            if (i != j)
            {
                printf("(%d,%d)=>",i,j);
                int ip;
                scanf("%d",&ip);
                G[i][j]=G[j][i]=ip;
            }
        }
    }
}
void print()
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            print("%d ",G[i][j]);
        }
        printf("\n")
    }
    
}
int main()
{
    read();
    print();
    return 0;
}
