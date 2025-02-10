#include<stdio.h>
#include<stdlib.h>
#define MAX 12
#define number 3
void push(int s[MAX], int top[number],int bound[number],int i)
{
	if(top[i]==(bound[i]+4))
	{
		printf("Overflow\n");
		return;
	}
	printf("Enter element to insert\n");
	top[i]=top[i]+1;
	scanf("%d",&s[top[i]]);
}
void pop(int s[MAX], int top[number],int bound[number],int i)
{
	if(top[i]==(bound[i]))
	{
		printf("Underflow\n");
		return ;
	}
	printf("Popped %d\n",s[(top[i])--]);
}
void display(int s[MAX], int top[number],int bound[number])
{
	int i,j;
	for(i=0;i<number;i++)
	{
		printf("Stack %d\n",i);
		if(top[i]==(bound[i]))
		{
			printf("Underflow\n");
			continue;
		}
		else
			for(j=bound[i]+1;j<=top[i];j++)
				printf("%d\n",s[j]);
	}
}

int main()
{
	int a[MAX]={},top[number]={-1,3,7},bound[number]={-1,3,7},sn,ch;
	printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
	for(;;)
	{
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter stack number\n");
				scanf("%d",&sn);
				push(a,top,bound,sn);
				break;
			case 2:
				printf("Enter stack number\n");
				scanf("%d",&sn);
				pop(a,top,bound,sn);
				break;
			case 3:
				display(a,top,bound);
				break;
			default:
				exit(0);
		}
	}	
}