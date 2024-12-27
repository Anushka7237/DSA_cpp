#include<iostream>
using namespace std;
//reverse using extra space
void reverse1(int*arr,int n)
{
    int temp[n],i;
    for(i=0;i<n;i++)
    {
        temp[i]=arr[n-i-1];
    }
    cout<<"reverse array"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
}
//reverse without using extra space
void reverse2(int*arr,int start,int end,int n)
{
    int i,temp;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[10],i,n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    cout<<"reverse using extra space"<<endl;
    reverse1(arr,n);
    cout<<endl;
    cout<<"reverse without using extra space"<<endl;
    reverse2(arr,start,end,n);
    return 0;
}