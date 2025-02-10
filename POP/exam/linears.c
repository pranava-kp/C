#include <stdio.h>


void main() {
    
    int a[20]={0},ele,i,pos=-1,n;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the search element\n");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
        pos=i;
        break;
        }
    }
    if(pos==-1)
        printf("Element doesnt exist");
    else
        printf("Element exists at %d",pos+1);
    

}