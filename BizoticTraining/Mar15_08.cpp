/*
Given an array of n elements, find the majority element in the array,
that appears strictly more than n/2 times
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++)
        cin>>p[i];
    int c=p[0];
    int count=1;
    int i;
    for(i=1;i<n;i++) 
        {if(p[i]==c)
            count++;
        else
            count--;
        if(count==0)
        {
            c=p[i];
            count =1;
        }
        if(count>(n/2))
            break;
        }
    cout<<c;

}