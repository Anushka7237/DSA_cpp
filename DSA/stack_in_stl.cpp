#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char>s;
    s.push('a');
    s.push('b');
    s.push('c');
    s.push('d');
    s.push('e');
    s.push('a');
    s.push('f');
    s.push('g');
    while(!s.empty())
    {
        cout<<s.top()<<"  ";
        s.pop();
    }
    return 0;
}