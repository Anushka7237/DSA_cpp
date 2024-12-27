#include<iostream>
using namespace std;
 void print_subarray(int*arr,int n)
{
    for(int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++)
        {
            //cout<<"("<<start<<","<<end<<") ";
            for(int i=start;i<=end;i++)
            cout<<arr[i];
            cout<<",";
        }
        cout<<endl;
    }
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
    print_subarray(arr,n);
    return 0;
}