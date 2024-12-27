#include <iostream>
#include <queue>
using namespace std;
class stack
{
    queue<int> q1, q2;

public:
    void push(int data)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(data);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    void pop()
    {
        q1.pop();
    }
    int top()
    {
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
};
int main()
{
    stack q;
    q.push(10);
    q.push(110);
    q.push(102);
    q.push(101);
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    return 0;
}