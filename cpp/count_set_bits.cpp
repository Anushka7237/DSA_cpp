#include<iostream>
using namespace std;
int main()
{
    int n,d,sum=0;
    cout<<"enter no."<<endl;
    cin>>n;
    int num=n;
    while(n>0)
    {
        d=n&1;
        sum=sum+d;
        n=n>>1;
    }
    cout<<"count bit of no. "<<num<<" is "<<sum<<endl;
    return 0;
}