// Write a C++ program to find all elements in an array of integers that have at least two significant elements.
#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i,j,flag=0,y;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[i]==arr[j])
            {
            flag++;
            y=arr[i];
            }
        }
    if(flag==2)
    {
        cout<<y<<" ";
    }
    }
    
    return 0;
}