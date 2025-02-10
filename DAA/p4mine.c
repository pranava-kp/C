#include<stdio.h>
void dijkstra(int n,int cam[20][20],int src)
{
    int visited[20]={0};
    int d[20];
    int min,u,v,j,i;
    for(i=0;i<n;i++) 
        d[i]=cam[src][i];
    visited[src]=1;
    for(i=0;i<n;i++)
    {
        min=99;
        u=-1;
        for(j=0;j<n;j++)
            if(d[j]<min)
            {
                min=d[j];
                u=j;
            }
        visited[u]=1;
        for(v=0;v<n;v++)
            if(visited[v]==0)
                if(d[u]+cam[u][v]<d[v])
                    d[v]=d[u]+cam[u][v];
    }
    printf("Shortest paths from %d toother vertices are\n");
    for(i=0;i<n;i++)
            if(d[i]==99)
                printf("No path exists to %d\n",i);
            else
                printf("Shortest path to %d is %d\n",i,d[i]);
}
int main()
{
    int n,cam[20][20],src,i,j;
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    printf("Enter CAM\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&cam[i][j]);
    printf("Enter the source vertex\n");
    scanf("%d",&src);
    dijkstra(n,cam,src);
    
}