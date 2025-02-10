#include<stdio.h>
int i,j,k,a,b,u,v,min,mincost=0,cam[20][20],parent[20],n,ne=1;
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
int find(int i)
{
    while(parent[i])
        i=parent[i];
    return i;
}
int main()
{
    printf("Enter the number of vertices");
    scanf("%d",&n);
    printf("Enter the cost adjacenecy matrix\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cam[i][j]);
            if(cam[i][j]==0)
                cam[i][j]=999;
        }
    while(ne<n)
    {
        for(i=1,min=999;i<=n;i++)
            for(j=1;j<=n;j++)
                if(cam[i][j]<min)
                {
                    min=cam[i][j];
                    a=u=i;
                    b=v=j;
                }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            printf("Edge %d from %c to %c cost = %d\n",ne++,a+64,b+64,min);
            mincost+=min;
        }
        cam[a][b]=cam[b][a]=999;
    }
    printf("Total cost is %d",mincost);
}