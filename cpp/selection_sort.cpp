#include<iostream>
using namespace std;
void selection_sort(int*arr,int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        swap(arr[i],arr[min]);
    }
    cout<<"sorting after selection sort"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,i,arr[10];
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array element"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    return 0;
}