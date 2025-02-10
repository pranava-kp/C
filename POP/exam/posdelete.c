#include <stdio.h>


void main() {

    int a[20],n,pos,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the position to be deleted from \n");
    scanf("%d",&pos);
    if(pos<n)
    {
    for(i=pos-1;i<n-1;i++)
        a[i]=a[i+1];
    n--;
    }
    else
    printf("No element exists");
    printf("updated array is \n");
    for(i=0;i<n;i++)
        printf("%d",a[i]);


}