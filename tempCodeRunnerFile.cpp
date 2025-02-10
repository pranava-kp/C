#include<stdio.h>
int m1[20][20],m2[20][20],n;

void floyds()
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            {
                scanf("%d",m1[i][j]);
                m2[i][j]=m1[i][j];
            }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(m2[i][j]>m1[i][k]+m1[k][j])
                    m2[i][j]=m1[i][k]+m1[k][j]
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                m1[i][j]=m2[i][j];
    }
    printf("The cam is \n")
     for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
           printf("%d",m2[i][j]);
        printf("\n");
     }
}
int main()
{
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    floyds();
    
}