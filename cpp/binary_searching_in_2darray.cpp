#include<iostream>
using namespace std;
int main()
{
int n,m,i,j,key,arr[4][4],flag=0;
    cout<<"enter no. of rows"<<endl;
    cin>>n;
    cout<<"enter no. of columns"<<endl;
    cin>>m;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"enter key"<<endl;
    cin>>key;
    cout<<"2d array--"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
    while(arr[i][j]<=arr[i][m-1])
    {
        mid=start+end/2;
        if(arr[i][mid]==key)
        {
        cout<<"key found at ["<<i<<"]"<<"["<<j<<"]";
        flag++;
        }
        else if(arr[i][mid]>key)
        end=end-1;
        else
        start=start+1;
    }
    }