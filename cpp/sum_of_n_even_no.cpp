// Write a C++ program that displays the sum of the n terms of even natural numbers
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"even no. are "<<" ";
    for(num=1;num<=n;num++)
    {
        if(num%2==0)
        {
        sum+=num;
        cout<<num<<" ,";
        }
    }
    cout<<endl;
    cout<<"sum of even natural no. upto "<<n<<"th term is "<<sum<<endl;
    return 0;
}