#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,arr[10][10];
    cout<<"enter no. of rows"<<endl;
    cin>>m;
    cout<<"enter no. of columns"<<endl;
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"2D-Array"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}