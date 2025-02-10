#include<iostream>
using namespace std;
int main()
{
	int a[20],i,j,n;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	cout<<"Enter the array elements"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-1;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
			 	int temp=a[j];
			 	a[j]=a[j+1];
			 	a[j+1]=temp;
			}
	cout<<"Sotred array elements are "<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<endl;
	return 0;		
}
