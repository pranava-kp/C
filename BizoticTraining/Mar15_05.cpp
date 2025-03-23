// Given an array of sorted integers, task is to find whether all the
// elements of the array are equal to the value k or not.
#include<iostream>
// #include<memory>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    if((a[0]==k)&&(a[0]== a[n-1]) )
        cout<<"All elements are equal to "<<k<<endl;
    else
        cout<<"All elements are not equal to "<<k<<endl;
}