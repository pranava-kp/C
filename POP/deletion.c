#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10],ele,pos,n,i,j;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to be deleted\n");
    scanf("%d",&ele);
    for(i=0;i<=n;i++)
    {
        if(a[i]==ele)
        {
            for(j=i;j<n-1;j++)
                a[j]=a[j+1];
            n--;
            break;
        }
        if(i==n)
        {
            printf("Element not found\n");
            exit(0);
        }
    }
    printf("New array is \n[");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
    printf("\b]");
}