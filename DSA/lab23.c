#include<stdio.h>
#include<stdlib.h>

void push(int s[], int *top,int *MAX)
{
	if(*top==*MAX-1)
	{
		(*MAX)*=2;
		s=realloc(s,sizeof(int)*(*MAX));
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
	int *a,top=-1,ch,MAX=3;
	a=(int*)calloc(sizeof(int),MAX);
	printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
	for(;;)
	{
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push(a,&top,&MAX);
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