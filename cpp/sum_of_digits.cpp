#include<iostream>
using namespace std;
int sum_of_digits(int n){
    int d,sum=0;
     while(n!=0)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter no."<<endl;
    cin>>n;
    int e=n;
    int result=sum_of_digits(n);
    cout<<"sum of digits of no. "<< e <<" is = "<<result<<endl;
    return 0;
}