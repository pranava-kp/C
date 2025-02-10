#include<stdio.h>
int main()
{
	void accept(int *,int);
	void sort(int *,int);
	int search(int *,int,int);
	int a[20];
	int n,ele,r;
	printf("Enter number of elements\n");
	scanf("%d",&n);
	accept(a,n);
	sort(a,n);
	printf("Enter search element\n");
	scanf("%d",&ele);
	r=search(a,ele,n);
	printf("%d\n",r);
	if(r!=-1)
		printf("Element exists at position %d",r);
	else
		printf("Element does not exist");
}
void accept(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void sort(int *a,int n)
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;	
			}
		}
	printf("Sorted array is \n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
int search(int *a,int ele,int n)
{
	int big=0,end=n,mid;
	while(big<=end)
	{
		mid=(big+end)/2;
		if(a[mid]==ele)
		{
			printf("Found at %d",mid);
			break;
		}
		else if (a[mid]<ele)
			big=mid+1;
		else
			end=mid-1;
	}
	
}

