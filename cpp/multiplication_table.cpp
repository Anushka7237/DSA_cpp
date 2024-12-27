//Write a program in C++ to display the multiplication table vertically from 1 to n.
#include<iostream>
using namespace std;
void multiplication_table(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            cout<<i<<" * "<<j<<" = "<<i*j<<endl;
        }
        cout<<endl;
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    multiplication_table(n);
    return 0;
}