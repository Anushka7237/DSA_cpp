#include<iostream>
#include<stack>
using namespace std;
void push_at_bottom(stack<int>&stack,int val)
{
    if(stack.empty()){
    stack.push(val);
    return;
    }
    int temp=stack.top();
    stack.pop();
    push_at_bottom(stack,val);
    stack.push(temp);
}
int main()
{
    stack<int>stack;
    stack.push(3);
    stack.push(2);
    stack.push(1);
    int val=4;
    push_at_bottom(stack,val);
    while(!
    stack.empty())
    {
    cout<<stack.top()<<" ";
    stack.pop();
    }
return 0;
}