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
void concat(int *c,int *a,int *b,int m,int n)
{
int i;
int t=m+n;
for(i=0;i<m;i++)
	c[i]=a[i];
for(i=m;i<t;i++)
	c[i]=b[i-m];
}
int main()
{
	int a[20],b[20],c[20],m,n;
	printf("Enter number of elements in array 1\n");
	scanf("%d",&m);
	accept(a,m);
	printf("Enter number of elements in array 2\n");
	scanf("%d",&n);
	accept(b,n);
	concat(c,a,b,m,n);
	display(c,(m+n));
	return 0;
}
