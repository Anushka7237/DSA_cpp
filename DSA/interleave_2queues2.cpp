#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>org;
    queue<int>first;
    org.push(1);
    org.push(2);
    org.push(3);
    org.push(4);
    org.push(5);
    org.push(6);
    org.push(7);
    org.push(8);
    org.push(9);
    org.push(10);
    for(int i=0;i<org.size()/2;i++)
    {
        first.push(org.front());
        org.pop();
    }
    while(!first.empty())
    {
        org.push(first.front());
        org.push(org.front());
        first.pop();
        org.pop();
    }
    while(!org.empty())
    {
        cout<<org.front()<<" ";
        org.pop();
    }
    return 0;
}