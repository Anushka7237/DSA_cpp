#include<iostream>
#include<stack>
using namespace std;
void reverse(stack<int>&s)
{
    if(s.empty()){
    return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    s.push(temp);
}
int main()
{
    stack<int>s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(0);
    reverse(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}