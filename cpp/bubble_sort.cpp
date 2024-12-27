#include<iostream>
using namespace std;
void bubble_sort(int*arr,int n)
{
    int i,j;
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<=n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    cout<<"sorted array after bubble sort"<<endl;
    for(i=0;i<n;i++)
    {   
    cout<<arr[i]<<" ";
    }
}
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
    bubble_sort(arr,n);
    return 0;
}