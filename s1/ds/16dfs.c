#include <stdio.h>
// stack, top of stack, adjacency matrix, visted vertices,number of vertices
int stk[20], top = -1, adj[20][20] = {0}, visted[20] = {0}, N;

void read()
{
    int ch;
    printf("enter the no of vertices: ");
    scanf("%d", &N);

    printf("Enter the adjaceny matrix: ");
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j++)
        {
            if (i != j)
            {

                printf("(%d,%d):", i, j);
                scanf("%d", &ch);
                adj[i][j] = adj[j][i] = ch;
            }
        }
    }
}
void display()
{
    printf("Adjacency matrix is:\n");
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}
void dfs(int start)
{

    // currnt vertext
    int curV = start;
    visted[curV] = 1;
    printf("%d ", curV);
    stk[++top] = curV;
    int count = 1;
    while (count != N)
    {
        for (int i = 1; i <= N; i++)
        {
            if (adj[curV][i] && !visted[i])
            {
                curV = i;
                printf("%d ", curV);
                count += 1;
                stk[++top] = curV;
                visted[curV] = 1;
            }
        }
        curV = stk[--top];
    }
}

int main()
{
    int start;
    read();
    display();
    printf("Enter the starting vertex: ");
    scanf("%d", &start);
    dfs(start);
    return 0;
}