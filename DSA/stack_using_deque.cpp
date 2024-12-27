#include<iostream>
#include<deque>
using namespace std;
// class stack{
//     deque<int>d;
//     public:
//     void push(int data)
//     {
//         d.push_front(data);
//     }
//     void pop()
//     {
//         d.pop_front();
//     }
//     int top()
//     {
//         return d.front();
//     }
//     bool empty()
//     {
//         return d.empty();
//     }
// };
class stack{
    deque<int>d;
    public:
    void push(int data)
    {
        d.push_back(data);
    }
    void pop()
    {
        d.pop_back();
    }
    int top()
    {
        return d.back();
    }
    bool empty()
    {
        return d.empty();
    }
};

int main()
{
    stack s;
    for(int i=1;i<=5;i++)
    {
        s.push(i);
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}