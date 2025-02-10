#include<iostream>
using namespace std;
class ABC;
class XYZ
{
	int data;
	public:
		void set(int value)
		{
		data=value;
		}
		friend void add(XYZ,ABC);
};

class ABC
{
	int data;
	public:
		void set(int value)
		{
		data=value;
		}
		friend void add(XYZ,ABC);
};
void add(XYZ ob1, ABC ob2)
{
	cout<<"Sum of data values of XYZ and ABC using friend function is "<<ob1.data+ob2.data<<endl;
}
int main()
{
	XYZ x;
	ABC a;
	x.set(5);
	a.set(55);
	add(x,a);
}

