#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
int a[10][10],f[10];
void read(int n)
{
    int i,j;
    printf("Enter adjacent matrix\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
}
void dfs(int u,int n)
{
    int v;
    f[u]=1;
    printf("%d\t",u);
    for(v=1;v<n;v++)
    {
        if(a[u][v]==1 && f[v]==0)
            dfs(v,n);
    }
}
int main()
{
    int i,source,n,s[10],top=-1,no_conn,j;
    printf("Enter number of nodes:\n"); 
    scanf("%d", &n);
    read(n);
    for(source=0;source<n;source++)
    {
        printf("\nNodes reachable from %d are \n",source);
        for(i=0;i<n;i++)
            f[i]=0;
        dfs(source,n);
        printf("\n");
    } 
}