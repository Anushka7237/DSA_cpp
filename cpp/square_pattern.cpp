//Write a program in C++ to print a square pattern with the # character.
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"#"<<" ";
        }
        cout<<endl;
    }
    return 0;
}