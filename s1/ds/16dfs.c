#include <stdio.h>
// stack, top of stack, adjacency matrix, visted vertices,number of vertices
int stk[10], top = -1, adj[10][10] = {0}, visted[10] = {0}, N;

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
    top+=1;
    stk[top] = curV;

    while (top != -1)
    {
        top-=1;
        curV = stk[top];
        printf("%d ", curV);
        for (int i = 1; i <= N; i++)
        {
            if (adj[curV][i] && !visted[i])
            {
                top+=1;
                stk[top] = i;
                visted[i] = 1;
            }
        }
    }
}
// // printf("here,%d\n",top);
// for (int i = 1; i <= N; i++)
// {
//     // printf("adj[%d][%d]=%d and visisted[%d]=%d\n", curV, i, adj[curV][i], i, visted[i]);
//     if (adj[curV][i] && !visted[i])
//     {
//         visted[curV] = 1;
//         curV = i;
//         printf("%d ", curV);
//         top += 1;
//         stk[top] = curV;
//         goto Here;
//     }
//     // printf("i %d\n",i);
// }
// top -= 1;
// if (top != -1)
// {
//     // printf("top\n");
//     curV = stk[top];
//     goto Here;
// }

int main()
{

    read();
    display();
    dfs(1);
    return 0;
}