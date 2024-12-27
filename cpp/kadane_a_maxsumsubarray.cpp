#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;
 void maxsum_subarray(int*arr,int n)
{
    int maxsum=INT_MIN;
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        maxsum=max(maxsum,sum);
        if(sum<0)
        sum=0;
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
//time complexity of this(kadane's apporach) is o(n)