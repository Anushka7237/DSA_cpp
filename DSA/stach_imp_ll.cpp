#include<iostream>
#include<vector>
using namespace std;
template<class T>
class node{
    public:
    T data;
    node*next;
    node(T val)
    {
        data=val;
        next=NULL;
    }
};
template<class T>
class stack{
    node<T>*head;
    public:
    stack()
    {
        head=NULL;
    }
    void push(T val)
    {
        node<T>*newnode=new node<T>(val);
        //if(head==NULL)
        //rhead=newnode;
        newnode->next=head;
        head=newnode;
    }
    void pop()
    {
        node<T>*temp=head;
        head=head->next;
        temp->next=NULL;
        delete(temp);
    }
    T top()
    {
        return head->data;
    }
    bool isempty()
    {
        return head==NULL;
    }
};
int main()
{
    stack<char>s;
    s.push('a');
    s.push('n');
    s.push('u');
    while(!s.isempty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}