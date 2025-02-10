#include<iostream>
using namespace std;
int add(int a,int b)
{
	cout<<"Integer addition"<<endl;
	return a+b;
}
double add(double a,double b)
{
	cout<<"Double addition"<<endl;
	return a+b;	
}
int main()
{
	int a,b,si;
	double c,d,sd;
	cout<<"Enter two integers"<<endl;
	cin>>a>>b;
	si=add(a,b);
	cout<<"Sum is "<<si<<endl;
	cout<<"\nEnter two floating point values"<<endl;
	cin>>c>>d;
	sd=add(c,d);
	cout<<"Sum is "<<sd<<endl;
	return 0;
}
