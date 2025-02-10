#include<stdio.h>
int main()
{
    //int a[10],b[10],c[20],n,m,
    int i;
    /*printf("Enter number for elements for arrA\n");
    scanf("%d",&n);
    printf("Enter eements of arrA\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter number for elements for arrB\n");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&b[i]);
    }*/
    int a[20]={33,48,1,43,24,44};
    int b[20]={18,24,61,64,25,67};
    int c[40];
    int n=6;
    int m=6;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=n;i<n+m;i++)
    {
        c[i]=b[i-n];
    }
    printf("Merged array is \n[");
    for(i=0;i<n+m;i++)
    printf("%d,",c[i]);
    printf("\b]");
    return 0;
}