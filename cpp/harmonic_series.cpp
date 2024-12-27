// Write a program in C++ to display the n terms of a harmonic series and their sum.
//1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms.
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    float sum=0.0;
    cout<<"enter n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<1<<"/"<<i<<"+";
         sum +=1/float(i);
    }
    cout<<endl;
    cout<<"sum of harmonic series is "<<sum<<endl;
    return 0;
}