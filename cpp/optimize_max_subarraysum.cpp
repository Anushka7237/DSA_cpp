#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;
 void maxsum_subarray(int*arr,int n)
{
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++)
    {
        int sum=0;
        for(int end=start;end<n;end++)
        {
            sum+=arr[end];
            maxsum=max(maxsum,sum);
            cout<<sum<<",";
        }
        cout<<endl;
    }
    cout<<"maximum of max sub array is "<<maxsum<<endl;
}
int main()
{
    int i,n,arr[10];
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxsum_subarray(arr,n);
    return 0;
}
//time complexity of this(optimize code) is o(n*n)