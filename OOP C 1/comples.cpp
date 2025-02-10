#include<iostream>
using namespace std;
class Complex
{
    private:
    float r,i;
    public:
    Complex()
    {
        r=0;i=0;
    }
    Complex(float a,float b)
    {
        r=a;
        i=b;
    }
    friend Complex operator+(Complex ob1,Complex ob2);
    display()
    {
        cout<<r;
        if(i<=-1)
            cout<<i<<"i"<<endl;
        else
        cout<<"+"<<i<<"i"<<endl;
    }
};
Complex operator +(Complex ob1,Complex ob2)
{
    Complex temp;
    temp.r=ob1.r+ob2.r;
    temp.i=ob1.i+ob2.i;
    return temp;
}
int main()
{
    Complex ob1(2,5),ob2(5,7),ob3;
    ob3=ob2+ob1;
    ob3.display();
}