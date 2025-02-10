#include<stdio.h>
void accept(int *a,int n)
{
	int i;
	printf("Ener the elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void display(int *a,int n)
{
	int i;
	printf("Elements of array are \n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
void add(int *a,int *b,int *c,int n)
{
	int i;
	for(i=0;i<n;i++)
		c[i]=a[i]+b[i];
}
int main()
{
	int a[20],b[20],c[20],n;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	accept(a,n);
	accept(b,n);
	add(a,b,c,n);
	display(c,n);
	return 0;
}
