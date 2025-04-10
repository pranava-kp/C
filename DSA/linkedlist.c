#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node* link;
};
typedef struct node* NODE;

NODE getnode()
{
    NODE temp=(NODE) malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Memory not allocated\n");
        return NULL;
    }
    return temp;
}
NODE insert_front(NODE first,int n)
{
    NODE temp=getnode();
    temp->link=first;
    temp->info=n;
    return temp;
}
NODE delete_front(NODE first)
{
    if(first==NULL)
    {
        printf("Empty linked list\n");
        return NULL;
    }
    printf("Element deleted is %d\n",first->info);
    NODE temp=first->link;
    free(first);
    return temp;
}
NODE insert_rear(NODE first,int n)
{
    NODE temp=getnode();
    temp->info=n;
    temp->link=NULL;
    if(first==NULL)
        return temp;
    NODE cur=first;
    NODE prev=NULL;
    while(cur!=NULL)
    {
        prev=cur;
        cur=cur->link;        
    }
    prev->link=temp;
    return first;
}
NODE delete_rear(NODE first)
{
    NODE cur=first,prev;
    prev=NULL;
    if(first==NULL)
    {
        printf("Empty linked list\n");
        return NULL;
    }
    else if(first->link==NULL)
    {
        printf("Element deleted is %d\n",first->info);
        free(first);
        return NULL;

    }
    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    printf("Element deleted is %d\n",cur->info);
    prev->link=NULL;
    free(cur);
    return first;
}
void display(NODE first)
{
    const NODE cur=first;
    if(cur==NULL)
    {
        printf("Empty linked list\n");
        return;
    }
    while(cur!=NULL)
    {
        printf("%d\n",cur->info);
        cur=cur->link;
    }
}
int main()
{
    NODE first=NULL;
    int ch,ele;
    printf("1. Insert Front\n2. Insert Rear\n3. Delete Front\n4. Delete Rear\n5. Display\n6. Exit\n");
    for(;;)
    {
        printf("Enter Choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter element to insert\n");
                scanf("%d",&ele);
                first=insert_front(first,ele);
                break;
            case 2:
                printf("Enter element to insert\n");
                scanf("%d",&ele);
                first=insert_rear(first,ele);
                break;
            case 3:
                first=delete_front(first);
                break;
            case 4:
                first=delete_rear(first);
                break;
            case 5:
                display(first);
                break;
            default:
                exit(0);
                break;
        }
    }
}