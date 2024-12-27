#include<iostream>
using namespace std;
int partition(int *arr,int start, int end)
{
    int i=start-1;
    int pivot=arr[end];
    for(int j=start;j<end;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[end]);
    return i;
}
int  quicksort(int *arr,int start,int end)
{
    if(start>=end)
    return 0;
    int pivot=partition(arr,start,end);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,end);
}
void printarray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,i,arr[10];
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    printarray(arr,n);
    return 0;
}