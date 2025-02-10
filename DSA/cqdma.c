#include<stdio.h>
#include<stdlib.h>
int size=3;
void insert(int a[],int *rear,int *count)
{
    if(*count==size)
    {
    a=realloc(a,size*2);
    size*=2;
    printf("Memory doubled\n");
    }
    printf("Enter element to insert \n");
    *rear=((*rear)+1)%size;
    scanf("%d",&a[(*rear)]);
    (*count)++;
}
void delete(int a[],int *front,int *count)
{
    if(*count==0)
    {
        printf("Underflow\n");
        return;
    }
    printf("Deleted element is %d\n",a[*front]);
    *front=((*front)+1)%size;
    (*count)--;
}
void display(int a[],int front,int count)
{
    if(count==0)
    {
        printf("Empty queue\n");
        return;
    }
    while(count--!=0)
    {
        printf("%d\n",a[front]);
        front=(front+1)%size;
    }
}
int main()
{
    int *a=(int*)malloc(sizeof(int)*size);
    int rear=size-1,front=0,count=0,ch;
    for(;;)
    {
        printf("1. Insert\n2. Delete\n3. Display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert(a,&rear,&count);
                break;
            case 2:
                delete(a,&front,&count);
                break;
            case 3:
                display(a,front,count);
                break;
            default:
                printf("Invalid\n");
        }
    }
}