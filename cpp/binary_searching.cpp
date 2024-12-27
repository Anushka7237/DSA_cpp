#include<iostream>
using namespace std;
void binary_searching(int*arr,int start,int end,int key)
{
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==key)
        {
        cout<<"element "<<key<<" found at "<<mid<<endl;
        break;
        }
        else if(arr[mid]<key)
        start=start+1;
        else
        end=end-1;
    }
}
int main()
{
    int arr[10],n,i,key;
    cout<<"Adarsh Singh Sengar"<<endl<<"CSDS"<<endl<<"2-A"<<endl;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter key"<<endl;
    cin>>key;
    cout<<"By binary searching(iterative method)"<<endl;
    int start=0;
    int end=n-1;
    binary_searching(arr,start,end,key);
    return 0;
}