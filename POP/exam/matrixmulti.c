#include<stdio.h>
void main()
{
    int m,n,p,q,i,j,k=0;
    long A[5][5],B[5][5],C[5][5];
    printf("Enter size of matrix A\n");
    scanf("%d%d",&m,&n);
    printf("Enter size of matrix B\n");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("Enter element of Matrix A\n");
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&A[i][j]);
        printf("Enter element of Matrix B\n");
        for(i=0;i<p;i++)
            for(j=0;j<q;j++)
                scanf("%d",&B[i][j]);
        for(i=0;i<m;i++)
            for(j=0;j<q;j++)
            {  
                C[i][j]=0;
                for(k=0;k<n;k++)
                    C[i][j]+=A[i][k]*B[k][j];
            }
        printf("The product of two matrices is \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
                printf("%d\t",C[i][j]);
            printf("\n");
        }
    
    }
    else printf("Multiplcation not possible");
}