#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,arr[10][10],sum=0;
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
        for(j=0;j<n;j++)
        {
            i=1;
            sum+=arr[i][j];
        }
    cout<<"sum of second row in a matrix "<<sum<<endl;
    return 0;
}