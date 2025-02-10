//master
#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

int a[10][10], f[10];
void read(int n)
{
    int i,j;
    printf("Enter adjacent matrix\n");
    for (i=0; i<n;i++)
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
}
void dfs(int source,int n)
{
    int i,s[SIZE],top=-1,no_conn,j;
    for (i=0; i < n; i++)
        f[i] = 0;
    f[source] = 1;
    s[++top] = source;
    printf("\nNodes reachable from %d are in DFS algorithm are :\n", source);
    while (top != -1)
    {
        no_conn = 0;
        for (j = 0; j < n; j++)
        {
            if (a[s[top]][j] ==1 &&f[j]==0)
            {
                printf("%d\t", j);
                s[++top] = j;
                f[j] = 1;
                no_conn = 1;
                break;
            }
        }
        if (no_conn == 0)
        {
            top--;
        }
    }
}
void dfs2(int source,int n)
{
    
    int v;
    f[source]=1;
    printf("%d\t",source);
    for(v=0;v<n;v++)
    {
        if(a[source][v]==1&&f[v]==0)
        {
            dfs2(v,n);
        }
    }
}

void bfs(int source, int n)
{
    int front = 0, rear = -1, i, j;
    int Q[SIZE];
    for(i=0; i<n; i++)
        f[i]=0;
    Q[++rear]=source;
    printf("\nNodes reachable from %d are in BFS algorithm are :\n",source);
    f[source] = 1;
    while(front <= rear)
    {
        for(j=0; j<n; j++)
        {
            if(a[Q[front]][j]==1 && f[j]==0)
            {
                printf("%d\t",j);
                Q[++rear]=j;
                f[j]=1;
            }
        }
        front++;
    }
}
int main()
{
    int source, n;
    printf("Enter number of nodes:\n");
    scanf("%d", &n);
    read(n);
    printf("Enter the node to check its reachability: \n");
    scanf("%d", &source);
    dfs(source, n);
    for(int i=0; i<n; i++)
        f[i]=0;
    dfs2(source, n);
    return 0;
}