#include<stdio.h>
#define MAX 100
void push(char *s,int *top,char symbol)
{
	s[++(*top)]=symbol;		
}
char pop(char *s,int *top) 
{
	return s[(*top)--];
}
int F(char symbol)
{
	switch(symbol)
	{
		case '-': case '+': return 2;
		case '*': case '/': case '%': return 4;
		case '$': case'^': return 5;
		case '(': return 0;
		case '#': return -1;	
		default: return 8;
	}
}
int G(char symbol)
{
	switch(symbol)
	{
		case '-': case '+': return 1;
		case '*': case '/': case '%': return 3;
		case '$': case'^': return 6;
		case '(': return 9;
		case ')': return 0;	
		default: return 7;
	}
}
void convert(char infix[100])
{	
	char s[MAX],postfix[100],symbol;
	int top=-1,j=0,i;
	push(s,&top,'#');
	for(i=0;infix[i]!='\0';i++)
	{
		symbol=infix[i];
		while(F(s[top])>G(symbol))
			postfix[j++]=pop(s,&top);
		if(F(s[top])!=G(symbol))
			push(s,&top,symbol);
		else
			top--;
	}
	while(s[top]!='#')
		postfix[j++]=pop(s,&top);
	postfix[j]='\0';
    printf("Postfix epression is %s\n",postfix);
}
int main()
{
	char infix[MAX];
	printf("Enter infix expression\n");
	scanf("%s",infix);
	convert(infix);
	return 0;
}