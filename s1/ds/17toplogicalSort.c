#include <stdio.h>

void main()
{
    int adj[50][50] = {0}, N, v[50] = {0};
    printf("Enter the number of vertices:");
    scanf("%d", &N);
    printf("Enter the adj matri:\n");
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("The topological sorting is: ");
    int count = 0, curv, flag = 1;

    int k = 1;
    while (count != N && k != 20)
    {

        for (int i = 1; i <= N; i++)
        {

            if (!v[i])
            {
                for (int j = 1; j <= N; j++)
                {

                    if (adj[j][i])
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag)
                {
                    curv = i;
                }
            }
            flag = 1;
        }

        printf("%d ", curv);
        v[curv] = 1;
        count += 1;
        for (int i = 1; i <= N; i++)
        {
            adj[curv][i] = 0;
        }
    }
}
