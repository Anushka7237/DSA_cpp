// Write a C++ program that displays the sum of n odd natural numbers.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,num,sum=0;
    cout<<"enter n"<<endl;
    cin>>n;
    for(num=1;num<=n;num++)
    {
            if(num%2==0)
            continue;
            else
            sum+=num;
    }
    cout<<"sum of odd natural no. upto "<<n<<"th term is "<<sum<<endl;
    return 0;
}