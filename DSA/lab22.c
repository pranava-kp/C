#include<stdio.h>
#include<stdlib.h>
#define MAX 3
void push(int s[], int *top)
{
	if(*top==MAX-1)
	{
		printf("Overflow\n");
		return;
	}
	printf("Enter element to insert\n");
	(*top)++;
	scanf("%d",&s[*top]);
}
void pop(int s[], int *top)
{
	if(*top==-1)
	{
		printf("Underflow\n");
		return ;
	}
	printf("Popped %d\n",s[(*top)--]);
}
void display(int s[], int top)
{
	int i,j;
    if(top!=-1)
    {
	    for(i=0;i<=top;i++)
            printf("%d\n",s[i]);
    }
    else
        printf("Underflow\n");
}
int main()
{
	int a[MAX]={},top=-1,ch;
	printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
	for(;;)
	{
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push(a,&top);
				break;
			case 2:
				pop(a,&top);
				break;
			case 3:
				display(a,top);
				break;
			default:
				exit(0);
		}
	}	
}