//Given an array of integers and number k, find the count of distict elements 
// in every window of size k in the array
//Sample input n=7 k=4 A=[1,2,1,3,4,2,3]
//Sample output 3 4 4 3
#include<iostream>
#include<memory>
using namespace std;
int main()
{
    int n,k,*a,count;
    cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    for(int i=0;i<=(n-k);i++)
    {
        count=k;
        for(int j=i;j<i+k;j++)
        {
            for(int l=j+1;l<(i+k);l++)
                if(a[l]==a[j])
                    count--;
        }
        cout<<count<<" ";
    }
}