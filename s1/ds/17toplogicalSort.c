#include <stdio.h>
int adj[10][10], N, visted[10] = {0};
int inDegree[10]={0};
void ts()
{
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            if(adj[i][j])
            {
                inDegree[j]==1;
            }
        }
    }
}
int main()
{
    printf("Enter the no of vertices:");
    scanf("%d", &N);
    printf("enter the adjacency matrix:\n");
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("the adj matrix is:\n");
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf("%d\t", adj[i][j]);
        }
        printf("\n");
    }

    return 0;
}