#include<iostream>
using namespace std;
int main()
{
int n,m,i,j,sum=0,arr[4][4];
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
    cout<<"diagonal elements are"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                cout<<arr[i][j]<<" ";
                sum+=arr[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"Diagonal sum of matrix is "<<sum<<endl;
    return 0;
}