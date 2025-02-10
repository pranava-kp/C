#include<stdio.h>
void main()
{
    int a[3][3]={};
    int b[3][3]={},c[3][3]={};
    printf("Enter size of matrix a\n");
    int m,n,p,q,i,j;
    scanf("%d%d",&m,&n);
    printf("Enter size of matrix b\n");
    scanf("%d%d",&p,&q);
    if(m==p && n==q)
    {
        printf("Enter elements of matrix a");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        }
        printf("Enter elements of matrix b");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&b[i][j]);
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                c[i][j]=a[i][j]+b[i][j];
        }
        printf("Added matrix is\n ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                printf("%d\t",c[i][j]);
            printf("\n\n");
        }
    }
    else
    {
        printf("Cannot perform addidition\n");
    }
}