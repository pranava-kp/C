#include<stdio.h>
#include<stdlib.h>
#define size 3
void insertCQ(char cq[size],int *rear,int *count)
{
    char ele;
    if(*count==size)
        printf("Queue is full\n");
    else
    {
        printf("Enter the element\n");
        scanf(" %c",&ele);
        *rear=((*rear)+1)%size;
        cq[*rear]=ele;
        (*count)++;
    }
}
void deleteCQ(char cq[size],int *front,int *count)
{
    if(*count==0)
        printf("No elements in the queue\n");
    else
    {
        printf("Element deleted is %c\n",cq[*front]);
        *front=((*front)+1)%size;
        (*count)--;
    }
}
void display(char cq[size],int front,int count)
{
    int i;
    if(count==0)
        printf("Empty Queue\n");
    else
        for(i=0;i<count;i++)
            {
                printf("%c\n",cq[front]);
                front=(front+1)%size;
            }
    
}
int main()
{
    int rear=size-1,front=0,count=0,ch;
    char cq[size];
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    for(;;)
    {
        printf("Enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insertCQ(cq,&rear,&count);
            break;
            case 2:
            deleteCQ(cq,&front,&count);
            break;
            case 3:
            display(cq,front,count);
            break;
            default:
            exit(0);
        }
    }
 return 0;

}