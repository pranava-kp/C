#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
    for(int i=0;i<argc;i++)
    {
        for(int j=0;argv[i][j]!='\0';j++)
        {
            cout<<argv[i][j];
        }
        cout<<endl;
    }
}
