#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int val)
    {
        data=val;
        next=prev=NULL;
    }
};
class doublylist
{
    public:
    node*head;
    node*tail;
    doublylist()
    {
        head=tail=NULL;
    }
    void push_front(int val)
    {
        node*newnode=new node(val);
        if(head==NULL)
        head=tail=newnode;
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }
    void pop_front()
    {
        if(head==NULL)
        cout<<"list is empty"<<endl;
        node*temp=head;
        head=head->next;
        if(head!=NULL)
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    void push_back(int val)
    {
        node*newnode=new node(val);
        if(head==NULL)
        head=tail=newnode;
        else{
            tail->next=newnode;
            newnode=
            tail->prev;
            tail=newnode;
        }
    }
    void pop_back()
    {
        if(head==NULL)
        cout<<"ll is empty"<<endl;
        tail=tail->prev;
        tail->next=NULL;
    }
    void printlist()
    {
        node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
int main()
{
    doublylist ddll;
    ddll.push_front(4);
    ddll.push_front(3);
    ddll.push_front(2);
    ddll.push_front(1);
    ddll.printlist();
    cout<<endl;
    ddll.pop_front();
    ddll.push_back(10);
    ddll.push_back(10);
    ddll.pop_back();
    ddll.printlist();
    return 0;
}