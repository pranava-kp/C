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
void ins(int *c,int pos,int n)
{
	int j;
	for(j=n;j>=pos;j--)
		c[j+1]=c[j];
}
int main()
{
	int a[20],pos,ele,i,n;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	accept(a,n);
	printf("Enter position to add to 0 to %d\n",n);
	scanf("%d",&pos);
	if(pos>n)
		printf("Out of array bounds\n");
	else
	{
		printf("Enter element to add\n");
		scanf("%d",&ele);
		ins(a,pos,n++);
		a[pos]=ele;
		display(a,n);
	}
	return 0;
}
