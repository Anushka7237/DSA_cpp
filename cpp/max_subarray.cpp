#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[10],i,n,start=0,end=n-1,sum=0;
    int maxsum=INT_MIN;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(start=0;start<n;start++)
    {
        for(end=start;end<n;end++)
        {
            int sum=0;
            for(i=start;i<=end;i++)
            {
            sum=sum+arr[i];
            }
            maxsum=max(maxsum,sum);
            cout<<sum<<",";
        }
        cout<<endl;
    }
    cout<<maxsum<<endl;
    
    return 0;
}