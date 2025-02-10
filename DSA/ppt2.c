#include<stdio.h>
#include<stdlib.h>
#define MAX 3
void insert(int qu[MAX],int *r)
{
    if(*r<MAX-1)
    {
        printf("Enter element to insert\n");
        (*r)++;
        scanf("%d",&qu[*r]);
    }
    else
        printf("Overflow\n");
}
void delete(int qu[MAX],int *f,int *r)
{
    if(*f<*r)
    {
        printf("Deleted %d\n",qu[*f]);
        (*f)++;
    }   
    else
        printf("Underflow\n");
}
void queueempty(int qu[MAX],int f,int r)
{
    if(f>r)
        printf("Queue is empty\n");
    else
        printf("Queue is not empty\n");
    return;
}
void queuefull(int qu[MAX],int r)
{
    if(r>=MAX-1)
        printf("Queue is full\n");
    else
        printf("Queue is not full\n");
    return;
}
void display(int qu[MAX],int f,int r)
{  
    if(r<f)
    {
        printf("Empty Queue\n");
        return;
    }
    int i;
    for(i=f;i<=r;i++)
        printf("%d\n",qu[i]);
}
int main()
{
    int qu[MAX],rear=-1,front=0,ch;
    printf("\n1. Insert\n2.Delete\n3.Full Status\n4.Empty Status\n5. Display\n6.Exit\n");
    for(;;)
    {
        printf("Enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert(qu,&rear);
                break;
            case 2:
                delete(qu,&front,&rear);
                break;
            case 3:
                queuefull(qu,rear);
                break;
            case 4:
                queueempty(qu,front,rear);
                break;
            case 5:
                display(qu,front,rear);
                break;
            default:
                exit(0);
        }
    }
}