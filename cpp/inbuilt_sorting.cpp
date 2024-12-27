#include<iostream>
#include<algorithm>
using namespace std;
void print(int*arr,int n)
{
    int i;
   for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
    sort(arr,arr+n,greater<int>());
    print(arr,n);
    cout<<endl;
    sort(arr,arr+n);
    print(arr,n);
    return 0;
}
