#include <iostream>
using namespace std;
class c {
int i;
public:
c() { i=0; }
c(int j) { i=j; }
int get_i() { return i; }
};
int main()
{
c ob[3] = {1, 2, 3};
c *p=NULL;
int i;
p = ob; // get start of array
for(i=0; i<3; i++)
{
cout<<"**** Content of pointer before incrementing "<<p<<endl;
cout << p->get_i() << "\n";
p++; // points to next object in the array
cout<<"**** Content of pointer after incrementing "<<p<<"\n\n";
}
return 0;
}
