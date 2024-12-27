#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(56);
    q.push(89);
    q.push(895);
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    q.pop();
    return 0;
}