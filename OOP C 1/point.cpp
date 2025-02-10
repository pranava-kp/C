#include<iostream>
using namespace std;
class point
{
	int x,y;
	public:
		point(int a,int b)
		{
			x=a;
			y=b;
			display();
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
};
int main()
{
	point p1(1,1);
	point p2(5,10);
	cout<<"Point P1 = ";
	p1.display();
	cout<<"Point P2 = ";
	p2.display();
	return 0;
		
}
