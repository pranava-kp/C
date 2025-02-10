#include<iostream>
using namespace std;
class d
{
	int i;
	public:
		d(int j){i=j;}//constructor
		int get_i(){return i;}
};
int main()
{
	d ob[3]={99,98,97};
	int i;
	for(i=0;i<3;i++)
		cout<<ob[i].get_i()<<endl;
	return 0;
}
