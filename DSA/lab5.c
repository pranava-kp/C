#include<stdio.h>
void disp(int x)
{
	printf("Value is %d\n",x);
}
void acc(int *y)
{
	printf("Enter the number \n");
	scanf("%d",y);
}
int add(int a,int b)
{
	int r;
	r=a+b;
	return r;
}
void sub(int *d)
{
	*d=*d-1;
}
void incr(int *e)
{
*e=*e+1;
}
int mult(int a,int b)
{
	int x;
	x=a*b;
	return x;
}
int div(int a,int *b)
{
	int x;
	x=a/(*b);
	return x;
}
int main()
{
	int a,b,res;
	acc(&a);
	acc(&b);
	incr(&a);
	disp(a);
	sub(&a);
	disp(a);
	res=add(a,b);
	disp(res);
	res=mult(a,b);
	disp(res);
	res=div(a,&b);
	disp(res);
	return 0;	
}
