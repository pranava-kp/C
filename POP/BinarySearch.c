#include<stdio.h>
void main()
{
    int a[30],i,num,key,low,mid,high,pos=-1;
    //Variables declaration 
    printf("\n Enter the Number of Elements"); 
    scanf("%d",&num); //Read num
    printf("\n Enter the Elements in Sorted Order : "); 
    for(i=0;i<num;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the key element to be searched\n"); 
    scanf("%d",&key); //Read key
    low=0;//Assigning low to 0
    high=num-1; // Assigning high to n-1
    while(low<=high)
    {
        mid=(low + high)/2; //Find out mid value
        if(a[mid]==key) //Compare a[mid] with key
        {
            pos=mid;
            break;
        //exit(0); //Exit from the program
        }
        else if(a[mid]>key)
            high=mid-1;
        else
            low=mid+1;
    }
    if(pos==-1)
        printf("UNSUCCESSFULL SEARCH\n");
    else
        printf("element %d is found at %d position:",key,mid+1);
    //return 0;
}