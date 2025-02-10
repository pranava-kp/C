#include<iostream>
using namespace std;
class Student
{	
	public:

	string name;
	int rollno, m1,m2,total;
	void accept()
	{
		cout<<"Enter student name"<<endl;
		cin>>name;
		cout<<"Enter roll no"<<endl;
		cin>>rollno;
		cout<<"Enter marks"<<endl;
		cin>>m1>>m2;
		calculate();
	}
	void calculate()
	{
		total=m1+m2;
	}
	void display()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Roll no : "<<rollno<<endl;
		cout<<"Total : "<<total<<endl;		
	}
};
int main()
{
int i,n;
Student a[20];
cout<<"Enter number of students"<<endl;
cin>>n;
for(i=0;i<n;i++)
	a[i].accept();
for(i=0;i<n;i++)
	a[i].display();	
return 0;

}
