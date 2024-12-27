#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,arr[10][10],flag=0;
    cout<<"enter m"<<endl;
    cin>>m;
    cout<<"enter n"<<endl;
    cin>>n;
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
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]==7)
            flag++;
        }
    }
    cout<<"no. of 7's found in matrix are "<<flag<<endl;
    return 0;
}