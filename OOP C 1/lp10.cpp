#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    int h,m,s,h1,m1,s1;
    fstream fh;
    fh.open("Filen.bin",ios::out|ios::binary);
    if(!fh.is_open())
    {
        cout<<"Error opening file"<<endl;
        exit(1);
    }
    cout<<"Enter h m and s"<<endl;
    cin>>h>>m>>s;
    fh.write((char*)&h,sizeof(int));
    fh.write((char*)&m,sizeof(int));
    fh.write((char*)&s,sizeof(int));
    fh.close();

    fh.open("Filen.bin",ios::in);
    fh.read((char*)&h1,sizeof(int));
    fh.read((char*)&m1,sizeof(int));
    fh.read((char*)&s1,sizeof(int));
    cout<<h1<<":"<<m1<<":"<<s1;
    fh.close();
    return 0;    
}
