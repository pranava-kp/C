#include<stdio.h>
void accept(int *b)
{
	int i;
	printf("Enter the elements\n");
	for(i=0;i<4;i++)
		scanf("%d",&b[i]);
}
void display(int *c)
{
	int i;
	printf("Elements of the array are \n");
	for(i=0;i<4;i++)
		printf("%d\n",c[i]);
}
int main()
{
	int a[4];
	accept(a);
	display(a);
	return 0;
}
