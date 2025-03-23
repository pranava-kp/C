/* 
Find the first repeating element in the array of integers that is the element that
occurs more than once and whose index of first occurrence is smallest.
Sample Input [1,5,3,4,3,5,6]
Sample Output 2
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]==a[j])
            {
                cout<<i<<endl;
                return 0;
            }
    return -1;
}