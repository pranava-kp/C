#include<stdio.h>
int m1[20][20],m2[20][20],n;
void warshalls()
{
    int i,j,k;
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            {scanf("%d",&m1[i][j]);
            m2[i][j]=m1[i][j];}
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                m2[i][j]=m1[i][j]||(m2[i][k]&&m2[k][j]);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                m1[i][j]=m2[i][j];    
    }
    printf("Transitive closure is \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",m1[i][j]);
        printf("\n");
    }
}
int main()
{
    warshalls();
}