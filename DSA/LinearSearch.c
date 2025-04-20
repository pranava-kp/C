#include<stdio.h>
void main()
{
    int a[30],i,num,key,low,mid,high,pos=-1;
    //Variables declaration 
    printf("\n Enter the Number of Elements"); 
    scanf("%d",&num); //Read num
    for(i=0;i<num;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the key element to be searched\n"); 
    scanf("%d",&key); //Read key
    for(i=0;i<num;i++)
        if(a[i]==key)
            break;
    if(i==num)
        printf("Element does not exist");
    else
        printf("Element exists at index %d",i);
    return 0;
}