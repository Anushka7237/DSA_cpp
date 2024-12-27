// Write a C++ program to find the most frequent element in an array of integers.
#include<iostream>
using namespace std;
int main()
{
    int i,j,n,arr[10];
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int max_count=0;
    for(i=0;i<n;i++)
    {
        int count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
            count++;
            }
        }
        if(count>max_count)
        max_count=count;
    }
    for(i=0;i<n;i++)
    {
        int count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(count==max_count)
        cout<<" most frequent element is "<<arr[i]<<endl;
    }
    return 0;
}