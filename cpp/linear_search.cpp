#include<iostream>
using namespace std;
int main()
{
    int flag=0,m,key,arr[10],i;
    cout<<"Adarsh Singh Sengar"<<endl<<"CSDS"<<endl<<"2-A"<<endl;
    cout<<"enter m"<<endl;
    cin>>m;
    cout<<"enter array elements"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter key"<<endl;
    cin>>key;
    cout<<"By linear searching(iterative method)"<<endl;
    for(i=0;i<m;i++)
    {
        if(key==arr[i])
        {
            cout<<"key found at "<<i<<endl;
            flag++;
            break;
        }
    }
    if(flag==0)
    cout<<"key not found"<<endl;
    return 0;
}