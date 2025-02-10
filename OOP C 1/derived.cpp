# include <iostream>
using namespace std;
class base
{
    int i, j; 
    public:
    void set(int a, int b)
    {
        i=a;
        j=b;
    }
    void show()
    {
        cout << i << " " << j << "\n";
    }
};
class derived : public base
{
    int k;
    public:
    derived(int x)
    {
        k=x;
    }    
    void showk()
    {
        cout << k << "\n";
    }
};
int main()
{
    derived ob(7);
    ob.set(11, 2); // access member of base
    ob.show(); // access member of base
    ob.showk(); // uses member of derived class return 0;
}