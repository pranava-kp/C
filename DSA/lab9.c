#include<stdio.h>
void split(int a[10],int b[10],int c[10],int m)
{
	int i,j=0,k=0;
	for(i=0;i<m;i++)
		if(i%2==0)
			b[j++]=a[i];
		else
			c[k++]=a[i];
}

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
int main()
{
	int n,a[10],b[10],c[10],m;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	accept(a,n);
	split(a,b,c,n);
	m=n/2;
	printf("Elements of array 1\n");
	display(b,n-m);
	printf("Elements of array 2\n");
	display(c,m);
}
