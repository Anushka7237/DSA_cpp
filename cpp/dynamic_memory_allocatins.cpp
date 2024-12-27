#include<iostream>
using namespace std;
int main()
{
    int size,i;
    cout<<"enter size"<<endl;
    cin>>size;
    int* ptr=new int[size];
    for(i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    for(i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
    delete[]ptr;
    return 0;
}