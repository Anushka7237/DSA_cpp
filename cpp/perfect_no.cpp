#include<iostream>
using namespace std;
int main()
{
    int i,num,a,b;
    cout<<"enter range"<<endl;
    cin>>a>>b;
    cout<<"perfect no. in btw "<<a<<" and "<<b<<" are "<<endl;
    for(num=a;num<=b;num++)
    {
        if(num<2)
        continue;
        int sum=0;
     for(i=1;i<num;i++)
        {
         if(num%i==0)
            sum=sum+i;
         }
         
         if(sum==num)
         cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
    