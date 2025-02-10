#include<stdio.h>
#include<stdlib.h>
struct node
{
	int pno,sem;
	char USN[10],name[20],program[3];
	struct node *link;
};
typedef struct node* NODE;
NODE getnode()
{
	NODE temp=(NODE)malloc(sizeof(struct node));
	if (temp==NULL)
	{
		printf("Memory not allocated\n");
		exit(0);
	}
	return temp;
}
void getdetails(NODE temp)
{
	printf("USN\n");
	scanf("%s",temp->USN);
	printf("Phone Number\n");
	scanf("%d",&(temp->pno));
	printf("Semester\n");
	scanf("%d",&temp->sem);
	printf("Name\n");
	scanf("%s",temp->name);
	printf("Program\n");
	scanf("%s",temp->program);
}
void putdetails(NODE temp)
{
	printf("USN : %s\n",temp->USN);
	printf("Phone Number : %d\n",temp->pno);
	printf("Semester : %d\n",temp->sem);
	printf("Name : %s\n",temp->name);
	printf("Program : %s\n",temp->program);
}
NODE insert_front(NODE first)
{
	NODE temp=getnode();
	temp->link=first;
	printf("Enter details\n");
	getdetails(temp);
	return temp;
}
NODE insert_rear(NODE first)
{
	NODE cur=first;
	if(cur==NULL)
	{
		cur=insert_front(cur);
		return cur;
	}
	else
	{
		while(cur->link!=NULL)
			cur=cur->link;
		NODE temp=getnode();
		printf("Enter details\n");
		getdetails(temp);
		temp->link=NULL;
		cur->link=temp;
		return first;
	}
}
void status(NODE first)
{
	NODE cur=first;
	int n=0;
	while(cur!=NULL)
	{
		cur=cur->link;
		n++;
	}
	if(n==0)
		printf("SLL is empty\n");
	else
		printf("Stack has %d elements\n",n);	
}
void display(NODE first)
{
	NODE cur=first;
	if(cur==NULL)
		printf("Empty \n");
	else
		while(cur!=NULL)
		{
			printf("\n\nStudent details are \n");
			putdetails(cur);
			cur=cur->link;
		}
}
NODE delete_front(NODE first)
{
	NODE cur;
	if(first==NULL)
	{
		printf("Empty SLL\n");
		return first;
	}
	printf("Deleted student details are \n");
	putdetails(first);
	if(first->link==NULL)
	{
		free(first);
		return NULL;
	}
	cur=first->link;
	free(first);
	return cur;
}
NODE delete_rear(NODE first)
{
	NODE cur,prev;
	if(first==NULL)
	{
		printf("Empty SLL\n");
		return first;
	}	
	if(first->link==NULL)
	{
		printf("Deleted student details are \n");
		putdetails(first);
		free(first);
		return NULL;
	}
	cur=first;
	prev=NULL;
	while(cur->link!=NULL)
	{	
		prev=cur;
		cur=cur->link;
	}
	prev->link=NULL;
	printf("Deleted student details are \n");
	putdetails(cur);
	free(cur);
	return first;
}
int main()
{
	NODE first=NULL;
	int n;
	int count,ch;
	printf("Enter number of students\n");
	scanf("%d",&n);
	while(n-->0)
		first=insert_front(first);
	status(first);
	printf("1. Insert front\n2. Insert Rear\n3. Delete Front\n4. Delete Rear\n5. Display\n6. Exit\n");
	for(;;)
	{
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
}