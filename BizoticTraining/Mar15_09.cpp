/*
Given an array of n-1, it contains only distinct integers in the range of 1 to n. Find the missing number from the array
Sample input [6, 5, 1, 2, 8, 3, 4, 7, 10]
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int total=n*(n+1)/2;
    int sum=0,ip;
    for(int i=0;i<n-1;i++)
    {
        cin>>ip;
        sum+=ip;
    }
    cout<<total-sum<<endl;
}