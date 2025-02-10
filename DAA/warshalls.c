#include<stdio.h>
#include<stdlib.h>
void warshall(int n)
{
    int m1[20][20],m2[20][20],i,j,k;
    printf("Enter adjacency matrix\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&m1[i][j]);
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                m2[i][j]=m1[i][j]||(m1[i][k]&&m1[k][j]);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                m1[i][j]=m2[i][j];
    }
    printf("Transitive closure is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",m1[i][j]);
        printf("\n");
    }
}
int main()
{
    printf("Enter number of vertices\n");
    int n;
    scanf("%d",&n);
    warshall(n);
}