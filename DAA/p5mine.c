#include<stdio.h>
void Toposort(int a[20][20],int n)
{
    int i,j,k=0,stack[20],in[20]={0},out[20],top=-1;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[j][i]==1)
                in[i]++;
    while(1)
    {
        for(i=0;i<n;i++)
            if(in[i]==0)
            {
                stack[++top]=i;
                in[i]=-1;
            }
            if(top==-1)
                break;
            out[k]=stack[top--];
            for(i=0;i<n;i++)
                if(a[out[k]][i]==1)
                    in[i]--;
        k++;
    }
    printf("The order of sorting is\n");
    for(i=0;i<n;i++)
        printf("%d ",out[i]+1);
}
int main()
{
    int n,am[20][20],i,j;
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    printf("ENter the AM\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&am[i][j]);
    Toposort(am,n);
}