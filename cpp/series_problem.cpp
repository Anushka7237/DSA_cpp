// Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.
#include<iostream>
#include<math.h>
using namespace std;
int series1(int n)
{
    double sum=0,a;
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<"1/"<<i<<"^"<<i<<"+";
        a=1/(pow(i,i));
        sum=sum+a;
    }
    cout<<endl;
    cout<<"sum of first series is "<<sum<<endl;
    return 0;
    
}
//Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
int series2(int n)
{
    int i;
    double sum=0,a;
    for(i=1;i<=n;i++)
    {
        cout<<i<<"*"<<i<<"+";
        a=i*i;
        sum=sum+a;
    }
    cout<<endl;
    cout<<"sum of second series is "<<sum;
    return 0;
}
//Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
int series3(int n)
{
    int i,a,sum=0;
    for(i=1;i<=n;i++)
    {
        cout<<i<<"+";
        sum=sum+i;
    }
    cout<<endl;
    cout<<"sum of third series is "<<sum<<endl;
    return 0;
}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    series1(n);
    cout<<endl;
    series2(n);
    cout<<endl;
    series3(n);
    cout<<endl;
    return 0;
}