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
void dele(int *c,int pos,int n)
{
	int j;
	for(j=pos;j<n-1;j++)
		c[j]=c[j+1];
}
int main()
{
	int a[20],pos,i,n;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);
	accept(a,n);
	printf("Enter position to delete from 0 to %d\n",n-1);
	scanf("%d",&pos);
	if(pos>n)
		printf("Out of array bounds\n");
	else
	{
		dele(a,pos,n--);
		display(a,n);
	}
	return 0;
}
