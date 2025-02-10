#include<stdio.h>
int main()
{
	int a[10],i,n=4;
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Array elements are \n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;	
}
