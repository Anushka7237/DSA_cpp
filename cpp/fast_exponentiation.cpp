#include<iostream>
using namespace std;
int main()
{
    int x,ans=1,num;
    cout<<"enter no."<<endl;
    cin>>x;
    cout<<"enter exponent part"<<endl;
    cin>>num;
    while(num>0)
    {
        if((num&1)>0)
        {
            ans=ans*x;
            x=x*x;
        }
        else
        {
            x=x*x;
        }
        num=num>>1;
    }
    cout<<ans<<endl;
    return 0;
}