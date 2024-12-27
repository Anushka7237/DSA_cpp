#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,arr[10][10];
    cout<<"enter m"<<endl;
    cin>>m;
    cout<<"enter n"<<endl;
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
    cout<<"matrix after reverse"<<endl;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=m-1;j>=0;j--)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}