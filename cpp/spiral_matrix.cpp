#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,arr[4][4];
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
    cout<<"2d array--"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"spiral matrix"<<endl;
        for(j=0;j<m;j++)
        {
            i=0;
            cout<<arr[i][j]<<" ";
        }
    for(i=1;i<n;i++)
    {
        j=n-1;
        cout<<arr[i][j]<<" ";
    }
    for(j=n-2;j>=0;j--)
    {
        i=n-1;
        cout<<arr[i][j]<<" ";
    }
    for(i=n-2;i>=n-3;i--)
    {
        j=0;
        cout<<arr[i][j]<<" ";
    }
    for(j=n-3;j<=n-2;j++)
    {
        i=1;
        cout<<arr[i][j]<<" ";
    }
    for(j=n-2;j<=n-3;j--)
    {
        i=n-2;
        cout<<arr[i][j]<<" ";
    }
    return 0;
}