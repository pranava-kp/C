#include<iostream>
using namespace std;
void func(int a, int b)
{
    string s="Division by zero";
    if(b==0)
        throw s;
    else
    cout<<a/b<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter a and b "<<endl;
    cin>>a>>b;
    try
        { func(a,b); }
    catch(string t)
        { cout<<"Exception "<<t; }
    return 0;
}