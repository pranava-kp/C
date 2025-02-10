//dfs


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
int main()
{
    int i,source,n,s[10],top=-1,no_conn,j;
    printf("Enter number of nodes:\n"); 
    scanf("%d", &n);
    read(n);
    for(source=0;source<n;source++)
    {
        for(i=0;i<n;i++)
            f[i]=0;
        f[source]=1;
        s[++top]=source;
        printf("\nNodes reachable from %d are \n",source);
        while(top!=-1)
        {
            no_conn=0;  
            for(j=0;j<n;j++)
            {
                if(a[s[top]][j]==1 && f[j]==0)
                {
                    printf("%d\t",j);
                    s[++top]=j;
                    f[j]=1;
                    no_conn=1;
                    break;
                }
            }
            if(no_conn==0)
            {top--;}
        }
    }
}