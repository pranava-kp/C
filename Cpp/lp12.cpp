#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int i;
    string s="Array index out of bounds";
    try
    {
        for(i=0;i<5;i++)
        {
            if(i<4)
                throw s;
        }
    }
    catch(string s)
    {
        cout<<"Exception caught : "<<s;
    }
}