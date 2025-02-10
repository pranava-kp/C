#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct term
{
    int x,y,z,cf;
    struct term* link;
};
typedef struct term * P;
P getnode()
{
    P temp=(P)malloc(sizeof(struct term));
    if(temp==NULL)
    {
        printf("Memory not allocatd\n");
        exit(0);
    }
    return temp;    
}
void display(P head)
{
    P cur=head->link;
    if(cur==head)
    {    
        printf("No elements exist\n");
        return;
    }
    while(cur!=head)
    {
    if(cur->cf>=0)
        printf("%dx^%dy^%dz^%d+",cur->cf,cur->x,cur->y,cur->z);
    else
        printf("\b%dx^%dy^%dz^%d+",cur->cf,cur->x,cur->y,cur->z);
    cur=cur->link;
    }
}
void displa(P head)
{
    P cur=head->link;
    if(cur==head)
    {    
        printf("No elements exist\n");
        return;
    }
    while(cur!=head)
    {
        printf("%d\t%d\t%d\t%d\n",cur->cf,cur->x,cur->y,cur->z);
        cur=cur->link;
    }
}
// void insert_front(P head)
// {
//     P temp=getnode();
//     printf("enter coefficient,px,py,pz\n");
//     scanf("%d%d%d%d",&temp->cf,&temp->x,&temp->y,&temp->z);
//     temp->link=head->link;
//     head->link=temp;
// }
void insert_rear(P head,int cf,int x,int y,int z)
{
    P cur=head->link;
    while(cur->link!=head)
        cur=cur->link;
    P temp=getnode();
    temp->cf=cf;
    temp->x=x;
    temp->y=y;
    temp->z=z;
    temp->link=head;
    cur->link=temp;
}
void evaluate(P head)
{
    P cur=head->link;
    if(cur==head)
    {
        printf("No element exists\n");
        return;
    }
    int x,y,z;
    double sum=0;
    printf("Enter values for x,y,z\n");
    scanf("%d%d%d",&x,&y,&z);
    while(cur!=head)
    {
        sum=sum+(double)(cur->cf)*(pow(x,cur->x))*(pow(y,cur->y))*(pow(z,cur->z));
        cur=cur->link;
    }
    printf("Value of expression is %f\n",sum);
}
P compare(P term,P p2)
{
    P cur=p2->link;
    while(cur!=p2)
    {
        if(term->x==cur->x && term->y==cur->y && term->z==cur->z)
            return cur;
        cur=cur->link;
    }
    return NULL;
}
void add(P p1,P p2,P p3)
{   
    P cur=p1->link;
    while(cur!=p1)
    {
        P next=compare(cur,p2);
        int cfs=cur->cf;
        if(next!=NULL)
        {
            cfs+=next->cf;
            next->cf=0;
        }
        insert_rear(p3,cfs,cur->x,cur->y,cur->z);
        cur=cur->link;        
    }
    cur=p2->link;
    while(cur!=p2)
    {
        if(cur->cf!=0)
        {
            insert_rear(p3,cur->cf,cur->x,cur->y,cur->z);
        }
        cur=cur->link;
    }
}
int main()
{
    P poly1=getnode(),poly2=getnode(),polysum=getnode();
    poly1->link=poly1;
    poly2->link=poly2;
    polysum->link=polysum;  
    int n,c,x,y,z;
    printf("Enter number of terms in polynomial 1\n");
    scanf("%d",&n);
    while(n-->0)
    {
        printf("Enter coefficient,px,py,pz\n");
        scanf("%d%d%d%d",&c,&x,&y,&z);
        insert_rear(poly1,c,x,y,z);
    }
    printf("Enter number of terms in polynomial 2\n");
    scanf("%d",&n);
    while(n-->0)
    {
        printf("Enter coefficient,px,py,pz\n");
        scanf("%d%d%d%d",&c,&x,&y,&z);
        insert_rear(poly2,c,x,y,z);
    }
    printf("Resultant of the two polynomial is \n");
    add(poly1,poly2,polysum);
    displa(polysum);
    evaluate(polysum);
    return 0;
}