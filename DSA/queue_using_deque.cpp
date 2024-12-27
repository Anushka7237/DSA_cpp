#include<iostream>
#include<deque>
using namespace std;
class queue{
    deque<int>d;
    public:
    void push(int data)
    {
        d.push_back(data);
    }
    void pop()
    {
        d.pop_front();
    }
    int front()
    {
        return d.front();
    }
    bool empty()
    {
        return d.empty();
    }
};

int main()
{
    queue q;
    for(int i=1;i<=5;i++)
    {
        q.push(i);
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}