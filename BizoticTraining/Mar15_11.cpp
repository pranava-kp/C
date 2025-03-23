/*
The number of visitors at a park is given for n consecutive days. A day is record breaking if it satisfies these conditions:
1. The number of visitors on that day is strictly larger than the number of visitors on each of the previous days. 
2. Either its the last day or the number of visitors on that day is strictly larger than the number of visitors on the following day. 
Note that the very first day could be a record breaking day. Find the number of record breaking days. 
Example Sample Input [9,6,8,3,11,2,17,9]
Sample Output is 3
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
    int c=0;
    for(int i=0;i<n;i++)
    {
        bool rb=true;
        for(int j=0;j<i;j++)
            if(p[j]>=p[i])
                rb=false;
        if((p[i]<=p[i+1]) && (i!=n-1))
            rb=rb && false;
        if(rb==true)
            c++;
    }
    cout<<c<<endl;
}