#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,n,sum=0,a=9;
    cout<<"enter n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=a;
        cout<<a<<"+";
        a=a*10+9;
    }
    cout<<endl;
    cout<<"sum of series is "<<sum<<endl;
    return 0;
}