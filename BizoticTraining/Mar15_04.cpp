//Given an array of size n, find the count of superior elements in an array.
//A superior element is the one which is greater than all the elemnts on its right. 
//Sample input [1,2,3,16,4,5,6,8]
//Output is 2
#include<iostream>
#include<memory>
using namespace std;
int main()
{
    int n, *a,boo=1,count=0;
    cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                boo=0;
                break;
            }
            else
                boo=1;
        }
        if(boo==1)
            count++;
        boo=1;
    }
    cout<<count<<endl;
}