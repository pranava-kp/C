#include<iostream>
using namespace std;
class c2;
class c1
{
	int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		friend c2 sum(c1,c2);
};
class c2
{
	
	public:
		int val;
		void display()
		{
		cout<<"Sum is "<<val<<endl;
		}
		friend c2 sum(c1,c2);
		
};
c2 sum(c1 ob1,c2 ob2)
{
	ob2.val=ob1.a+ob1.b;
	ob2.display(); 
	return ob2;//Expected answer is outputted when the function is called within the friend function
}
int main()
{
	c1 ob1;
	c2 ob2;
	ob1.setdata(5,10);
	c2 s=sum(ob1,ob2);
	ob2.display();
	cout<<"Sum is "<<s.val<<endl; //Incorrect answer is outputted when the function is called outside the friend function
	return 0;
}
