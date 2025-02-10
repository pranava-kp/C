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
void pop(int s[], int *top,int *ele)
{
	*ele=s[(*top)--];
}
void status(int s[], int top)
{
    int used;
    if (top==-1)
        used = 0;
    else
        used = top+1;
    printf("%d locations of the stack are used up\n", used);
    printf("%d locations of the stack are free\n", MAX - used);
}
void display(int s[], int top)
{
	int i,j;
    if(top!=-1)
    {
	    for(i=top;i>=0;i--)
            printf("%d\n",s[i]);
    }
    else
        printf("Empty Stack\n");
}
void palindrome(int s[],int *top)//Works only for single digit elements
{
	int x=0,y,z=0,ele;
	if(*top==-1)
	{
		printf("No elements\n");
		return;
	}
	else
	{	
		while(*top!=-1)
		{
			pop(s,top,&ele);
			x=x*10+ele;
		}
		y=x;
		
		while(x>0)
		{
			z=z*10+(x%10);
			x/=10;
		}
		if(y==z)
		{
			printf("Palindrome");
		}	
		else
			printf("Not");
	}
}
int main()
{
	int a[MAX],top=-1,ch,ele;
	printf("1. Push\n2. Pop\n3. Display\n4. Status\n5. Palindrome\n6. Exit\n");
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
				
				if(top==-1)
					printf("Underflow\n");
				else
				{
					pop(a,&top,&ele);
					printf("Popped %d\n",ele);
				}
				break;
			case 3:
				display(a,top);
				break;
			case 4:
				status(a,top);
				break;
			case 5:
				palindrome(a,&top);
			default:
				exit(0);
		}
	}	
}