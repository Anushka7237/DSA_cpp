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
        for(j=0;j<m;j++)
        {
            if (arr[i][j]==key){
            flag++;
            cout<<"key found at ["<<i<<"]"<<"["<<j<<"]";
        }
        }
    }
    if(flag==0)
    cout<<"key does not found"<<endl;
    return 0;
}