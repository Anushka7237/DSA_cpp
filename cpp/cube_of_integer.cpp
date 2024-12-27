//Write a program in C++ to display the cube of the number up to an integer.
#include<iostream>
using namespace std;
void cube(int i)
{
    cout<<"cube of "<<i<<" is "<<i*i*i<<endl;
}
int main()
{
    int n,i;
    cout<<"enter n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    cube(i);
    return 0;
}