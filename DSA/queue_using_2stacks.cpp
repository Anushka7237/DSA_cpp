#include<iostream>
#include<stack>
using namespace std;
class queue{
    stack<int>s1;
    stack<int>s2;
    public:
    void push(int data)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(data);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    void pop()
    {
        s1.pop();
    }
    int front()
    {
        return s1.top();
    }
};
int main()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front();
    return 0;
}