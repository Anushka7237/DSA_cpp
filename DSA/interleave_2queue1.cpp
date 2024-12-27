#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>org;
    queue<int>first;
    queue<int>ans;
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
    for(int i=0;i<org.size();i++)
    {
        first.push(org.front());
        org.pop();
    }
    while(!org.empty()&&!first.empty())
    {
        ans.push(first.front());
        ans.push(org.front());
        org.pop();
        first.pop();
    }
    while(!ans.empty())
    {
        cout<<ans.front()<<" ";
        ans.pop();
    }
    return 0;
}