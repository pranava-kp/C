#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"Enter 3 nos"<<endl;
	cin>>n1>>n2>>n3;
	int big;
	if(n1>=n2 && n1>=n3)
		big=n1;
	else if(n2>=n1 && n2>=n3)
		big=n2;
	else
		big=n3;
	cout<<"Largest is "<<big;
	return 0;
}
