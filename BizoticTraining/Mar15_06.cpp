/*
Find the equilibrium index in an array.
Equilibrium Index is the index such that the sum of elements on the lower indices
is equal to the sum of elements on the higher indices
Sample input [-7,1,5,2,-4,3,0]
Sample output 3
*/
#include<iostream>
using namespace std;
int main()
{
    int *lsum,*rsum,*a,n,sum,i;
    cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    lsum=new int[n];
    rsum=new int[n];
    lsum[0]=0;
    sum=0;
    for(i=1;i<n;i++)
        sum+=a[i];
    rsum[0]=sum;
    if(lsum[0]==rsum[0])    
        {cout<<"0"<<endl; return 0;}
    
    for(i=1;i<=n-2;i++)
    {
        sum=0;
        for(int j=0;j<i;j++)
            sum+=a[j];
        lsum[i]=sum;
        sum=0;
        for(int j=i+1;j<n;j++)
            sum+=a[j];
        rsum[i]=sum;
        if(lsum[i]==rsum[i])
        {
            free(lsum);
            free(rsum);
            {cout<<i<<endl; return i;}
        }
    }
    sum=0;
    for(int i=0;i<n-1;i++)  
        sum+=a[i];
    lsum[n-1]=sum;
    rsum[n-1]=0;
    if(lsum[n-1]==rsum[n-1])    
        {cout<<n-1<<endl;return n-1;}
    
    free(lsum);
    free(rsum);
    {cout<<-1<<endl;return -1;}
}