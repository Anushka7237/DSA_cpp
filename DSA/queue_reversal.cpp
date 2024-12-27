#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    queue<int>q;
    stack<int>s;
    for(int i=1;i<=5;i++)
    {
        q.push(i);
    }
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}