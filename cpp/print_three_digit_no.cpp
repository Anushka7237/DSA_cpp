#include<iostream>
using namespace std;
int main()
{
    int i,j,k,count=0;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            for(k=1;k<=6;k++)
            {
                if(i!=j && j!=k && k!=i)
                {
                    count++;
                    cout<<i<<j<<k<<" ";
                }
            }
        }
    }
    cout<<endl;
    cout<<"total no. of three digit no. formed =  "<<count<<endl;
    return 0;
}