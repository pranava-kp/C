#include<stdio.h>
void main()
{
     int i,j,n;
     int ne=1,a,b,u,v;
     int mincost=0;
     int cost[10][10];
     int visited[10]={0};
     int min;
     printf("enter the no of vertices\n");
     scanf("%d",&n);
     printf("enter the cost matrix\n");
     for(i=0;i<n;i++)
          for(j=0;j<n;j++)
          {
               scanf("%d",&cost[i][j]);
               if (cost[i][j]==0)
                    cost[i][j]=999;
          }
     visited[0]=1;
     while(ne<n)
     {
          for(i=0,min=999;i<n;i++)
               for(j=0;j<n;j++)
                    if(cost[i][j]<min)
                         if(visited[i]!=0)
                         {
                              min=cost[i][j];
                              a=u=i;
                              b=v=j;
                         }
          if (visited[u]==0 || visited[v]==0)
          {
               printf("edge %d (%d, %d) cost %d\n",ne++,a,b,min);
               visited[b]=1;
               mincost+=min;
          }
          cost[b][a]=cost[a][b]=999;
     }
     printf("the total cost of mcst= %d\n",mincost);
}