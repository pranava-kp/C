#include<stdio.h>
int main()
{
	int a[20],len,i;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&len);
	printf("Enter the array elements\n");
	for(i=0;i<len;i++)
		scanf("%d",&a[i]);
	printf("Entered array elements are \n");
	for(i=0;i<len;i++)
		printf("%d\n",a[i]);
}
