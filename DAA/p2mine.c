#include<stdio.h>
int i,j,k,cam[20][20],visited[20]={0},a,b,u,v,ne=1,n,mincost=0,min;
void main()
{
    printf("Enter the number of vertices");
    scanf("%d",&n);
    printf("Enter the cost adjacency matrix\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cam[i][j]);
            if(cam[i][j]==0)
                cam[i][j]=999;
        }
        visited[1]=1;
    while(ne<n)
    {
        for(i=1,min=+999;i<=n;i++)
            for(j=1;j<=n;j++)
                if(cam[i][j]<min && visited[i]==1)
                {
                    a=u=i;
                    b=v=j;
                    min=cam[i][j];
                }
        if(visited[u]==0||visited[v]==0)
        {
            printf("%d edge from %c to %c, cost = %d\n",ne++,a+65,b+65,min);
            mincost+=min;
            visited[b]=1;
            
        }
        cam[a][b]=cam[b][a]=999;
        
    }
    printf("total cost is %d\n",mincost);
}