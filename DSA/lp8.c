#include <stdio.h>
#include<stdlib.h>
struct emp
{
    struct emp *llink,*rlink;
    char SSN[10],name[10],dept[3],desig[15];
    float sal;
    int pno;
};
typedef struct emp * NODE;
NODE getnode()
{
	NODE temp=(NODE)malloc(sizeof(struct emp));
	if (temp==NULL)
	{
		printf("Memory not allocated\n");
		exit(0);
	}
    temp->llink=NULL;
    temp->rlink=NULL;
	return temp;
}
void getdetails(NODE temp)
{
	printf("SSN\n");
	scanf("%s",temp->SSN);
    printf("Name\n");
	scanf("%s",temp->name);
	printf("Phone Number\n");
	scanf("%d",&(temp->pno));
    printf("Department\n");
	scanf("%s",temp->dept);
    printf("Designation\n");
	scanf("%s",temp->desig);
    printf("Salary\n");
	scanf("%f",&temp->sal);
}
void putdetails(NODE temp)
{
	printf("SSN : %s\n",temp->SSN);
    printf("Name : %s\n",temp->name);
    printf("Phone Number : %d\n",temp->pno);
    printf("Department : %s\n",temp->dept);
    printf("Designation : %s\n",temp->desig);
    printf("Salary :  %.2f\n",temp->sal);    
}
NODE insert_front(NODE first)
{
    NODE temp=getnode();
    getdetails(temp);
    if (first==NULL)
        return temp;
    if(first->llink==NULL)
    {
        first->llink=temp;
        temp->rlink=first;
        return temp;
    }
}
NODE insert_rear(NODE first)
{
    if(first==NULL)
    {
        NODE temp=getnode();
        getdetails(temp);
        return temp;
    }
    NODE temp=getnode(),cur;
    cur=first;
    while(cur->rlink!=NULL)
        cur=cur->rlink;
    getdetails(temp);
    cur->rlink=temp;
    temp->llink=cur;
    return first;
}
NODE delete_front(NODE first)
{
    if(first==NULL)
    {
        printf("Empty DLL\n");
        return NULL;
    }
    printf("\nDeleted Node is \n");
    putdetails(first);
    NODE temp=first->rlink;
    if(temp==NULL)
        return NULL;
    temp->llink=NULL;
    free(first);
    return temp;
}
NODE delete_rear(NODE first)
{
    if(first==NULL)
    {
        printf("Empty DLL\n");
        return NULL;
    }
    NODE prev=NULL,cur=first;
    if(first->rlink==NULL)
    {
        printf("\nDeleted Node is \n");
        putdetails(first);
        free(first);
        return NULL;
    }    
    while(cur->rlink!=NULL)
    {
        prev=cur;
        cur=cur->rlink;
    }
    printf("\nDeleted Node is \n");
    putdetails(cur);
    free(cur);
    prev->rlink=NULL;
    return first;
}
void display(NODE first)
{
    NODE cur=first;
    if(cur==NULL)
    {    
        printf("Empty DLL\n");
        return;
    }
    while(cur!=NULL)
    {   
        printf("\n");
        putdetails(cur);
        cur=cur->rlink;
    }
}
void count1(NODE first)
{
	NODE cur=first;
	int n=0;
	while(cur!=NULL)
	{
		cur=cur->rlink;
		n++;
	}
	if(n==0)
		printf("SLL is empty\n");
	else
		printf("Stack has %d elements\n",n);	
}
int main()
{
    int n,ch;
    NODE first=NULL;
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    while(n-->0)
        first=insert_rear(first);
    count1(first);
    for(;;)
    {
        printf("1. Insert Front \n2. Insert Rear\n3. Delete Front\n4. Delete Rear\n5. Display\n6. Exit\n");
        printf("Enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                first=insert_front(first);
                break;
            case 2:
                first=insert_rear(first);
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
        }
    }
    return 0;
}