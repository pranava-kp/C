#include<stdio.h>
#include<math.h>
#include<ctype.h>
void push(int *s,int *top,int chara)
{
	
	s[++(*top)]=chara;		
}
int pop(int *s,int *top) 
{
	return s[(*top)--];
}
int fun(int op1, int op2,char symbol)
{
	switch(symbol)
	{
		case '+': return op1+op2;
		case '-': return op1-op2;
		case '*': return op1*op2;
		case '/': return op1/op2;
		case '^':
		case '$': return (pow(op1,op2));
		case '%': return op1%op2;
	}
}
int main()
{

	int s[20],top=-1,i,op1,op2,res;
	char postfix[20],symbol;
	printf("Enter postfix expression\n");
	scanf("%s",postfix);
	for(i=0;postfix[i]!='\0';i++)
	{
		symbol=postfix[i];
		if(isdigit(symbol))
			push(s,&top,symbol-'0');
		else
		{
			op2=pop(s,&top);
			op1=pop(s,&top);
			res=fun(op1,op2,symbol);
			push(s,&top,res);
		}
	}
	printf("Resultant is %d",pop(s,&top));
	
	return 0;
}