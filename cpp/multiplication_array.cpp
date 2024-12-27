//wap update every array element by multiplication of the next and previous values of a given array of integers.
#include<iostream>
using namespace std;
int main()
{
    int i,n,arr[20],mul,temp[10];
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        temp[i]=arr[i-1]*arr[i+1];
    }
    for(i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
}