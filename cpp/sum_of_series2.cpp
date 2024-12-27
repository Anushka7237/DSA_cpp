//Write a program in C++ to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
#include<iostream>
#include<math.h>
using namespace std;
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n,i,x;
    float sum=0.0;
    cout<<"enter x"<<endl;
    cin>>x;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<1<<"+";
    for(i=1;i<=n;i++)
    {
        cout<<pow(x,i)<<"/"<<i<<"!"<<"+";
        sum+=pow(x,i)/float(factorial(i));
    }
    sum+=1;
    cout<<endl;
    cout<<endl;
    cout<<"sum of series is "<<sum;
    return 0;
}
