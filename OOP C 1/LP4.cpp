#include<iostream>
using namespace std;
class Bank
{
	public:
	string name;
	float bal;
	long accno;
	void display()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Account Number : "<<accno<<endl;
		cout<<"Balance : "<<bal<<endl;
		if (bal<500)
			cout<<"Invalid balance"<<endl;
	}
	void update(float amt)
	{
		bal=bal+amt;
		display();
	}
};
int main()
{
	Bank b;
	int ch;
	float amt;
	cout<<"Enter account number"<<endl;
	cin>>b.accno;
	cout<<"Enter balance"<<endl;
	cin>>b.bal;
	cout<<"Enter name"<<endl;
	cin>>b.name;
	cout<<"1. Deposit\n2. Withdraw\n"<<endl;
	cout<<"Enter choice"<<endl;
	cin>>ch;
	if(ch==1 || ch==2)
	{
		cout<<"Enter amount"<<endl;
		cin>>amt;
		if(ch==1)
			b.update(amt);
		else
			b.update(-amt);
	}
	else
		cout<<"Invalid input"<<endl;
	return 0;	
}
