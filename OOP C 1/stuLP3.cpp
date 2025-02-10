#include<iostream>
using namespace std;
class student
{
	int roll,total;
	char name[50];
	public:
	void getdata()
	{
		cout<<"Enter roll no"<<endl;
		cin>>roll;
		cout<<"Enter name"<<endl;
		cin>>name;
		cout<<"Total"<<endl;
		cin>>total;
	}
	int pos(student obj[],int size)
	{
		int pos=0;
		int max=obj[0].total;
		for(int i=0;i<size;i++)
		{
			if(obj[i].total>max)
			{
				max=obj[i].total;
				pos=i;
			}
		}
		return pos;
	}
	void putdata()
	{
		cout<<"Roll no : "<<roll<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Total marks : "<<total<<endl;
	}
};
void arrayOfObjects()
{
	student s[3],s1;
	int pos;
	for(int i=0;i<3;i++)
		s[i].getdata();
	pos=s1.pos(s,3);
	cout<<"Higest scoring student"<<endl;
	s[pos].putdata();
}
int main()
{
	arrayOfObjects();
}
