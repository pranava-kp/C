//Given 2 arrays a1 and a2 of size n and m
//Task is t find whether a2 is a subset of a1 or not.
// Both the arrays can be sorted or unsorted and there can be duplicate elements
//a1 is [11, 7,1,13,21,3,7,3]
//a2 is [11,3,7,1,7]
//Output is yes
#include<iostream>
#include<memory>
using namespace std;
int main()
{
    int n,m,boo=1,ip;
    cin>>n;
    int a[100]={0};
    for(int i=0;i<n;i++)
    {
        cin>>ip;
        a[ip]=1;
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>ip;
        if(a[ip]==0)
            boo=0;
    }
    if(boo==0)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
}