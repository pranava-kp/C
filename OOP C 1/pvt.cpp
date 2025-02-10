#include<iostream>
using namespace std;
class Student
{
	int id=118;
	public:
	string name="CS";
	void disp()
	{
		cout<<id<<endl<<name<<endl;
	}
};
int main()
{
Student ob1;
Student::disp();
}
