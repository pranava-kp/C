#include <stdio.h>

void main() {
    
   int a[20],i,j,temp,n,pos;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
                pos=j;
        }
        if(pos!=i)
        {
            temp=a[i];
            a[i]=a[pos];
            a[pos]=temp;
        }
    }
    printf("Sorted array is \n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }



}