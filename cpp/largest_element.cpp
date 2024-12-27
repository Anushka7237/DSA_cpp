#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    cout<<"maximum elements in the array is "<<max<<endl;
    return 0;
}