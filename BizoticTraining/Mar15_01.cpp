//An Arithmetic array contains atleast 2 integers and the difference between consecutive integrs are equal. For example, [3,3,3] [9,7,5,3] are arithmetic arrays whereas [1,3,3,7] and [1,2,4] are not arithmetic arrays.
//In a given array of n non negative integers, the ith integer if array is A[i]. Determine the length of the longest contigious arithmetic subarray. 
//Sample input the array is [3,5,7,9,13,17,19,5]
//Sample output is 4
#include<iostream>
#include<memory>
using namespace std;
int main()
{
    int n,sd=0,count=1,countmax=0;
    cin>>n;
    if(n<=1)
        return -1;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sd=a[1]-a[0];
    count++;
    for(int i=1;i<n;i++)
    {
        if((a[i]+sd)==a[i+1])
        {
            count++;
            countmax=(count>countmax)?count:countmax;
        }
        else
        {
            sd=a[i+1]-a[i];
            count=2;
        }
    }
    cout<<countmax<<endl;
}