//Write a C++ program to list non-prime numbers from 1 to an upperbound.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,n,num;
    cout<<"enter the upperbound"<<endl;
    cin>>n;
    for(num=2;num<=n;num++)
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(num%i==0)
            {
                cout<<num<<" ";
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}