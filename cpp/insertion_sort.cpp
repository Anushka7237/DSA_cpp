#include<iostream>
using namespace std;
void insertion_sort(int*arr,int n)
{
    int current,previous,i;
    for(i=1;i<n;i++)
    {
        current=arr[i];
        previous=i-1;
        while(previous>=0 && arr[previous]>=current)
        {
            swap(arr[previous],arr[previous+1]);
            previous--;
        }
    }
    cout<<"array after insertion sorting"<<endl;
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
    cin>>arr[i];
    insertion_sort(arr,n);
    return 0;
    }
