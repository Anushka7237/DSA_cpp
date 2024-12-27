#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
    ~node()
    {
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
    }
};
class list{
    node* head;
    node* tail;
    public:
    list()
    {
        head=NULL;
        tail=NULL;
    }
    ~list()
    {
        if(head!=NULL)
        {
            delete head;
            head=NULL;
        }
    }
    void push_front(int val)
    {
        node* newnode=new node(val);
        if(head==NULL)
        head=tail=newnode;
        else{
            newnode->next=head;
            head=newnode;
        } 
    }
    void push_back(int val)
    {
        node* newnode=new node(val);
        if(head==NULL)
        head=tail=newnode;
        else{
            tail->next=newnode;
            tail=newnode;
        } 
    }
    void insert(int val,int pos)
    {
        node* newnode=new node(val);
        node* temp= head;
        for(int i=0;i<pos-1;i++)
        temp=temp->next;
        newnode->next=temp->next;
        temp->next-newnode;
    }
    void pop_front()
    {
        if(head==NULL)
        {
            cout<<"ll is empty"<<endl;
            return ;
        }
        node* temp= head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void pop_back()
    {
        if(head==NULL)
        {
            cout<<"ll is empty"<<endl;
            return ;
        }
        node* temp= head;
        while(temp->next->next!=NULL)
        temp=temp->next;
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void printlist()
    {
        node* temp= head;
            while(temp!=NULL)
            {
            cout<<temp->data<<"->";
            temp=temp->next;
            }
            cout<<"NULL";
    }
    void reverse()
    {
        node* prev=NULL;
        node* curr=head;
        node* next;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    
    
};
int main()
{
    list lst;
    lst.push_front(77);
    lst.push_front(7);
    lst.push_front(75);
    lst.push_front(78);
    lst.push_front(71);
    lst.printlist();
    cout<<endl;
    lst.pop_back();
    lst.printlist();
    cout<<endl;
    lst.pop_front();
    lst.printlist();
    cout<<endl;
    lst.reverse();
    lst.printlist();
    return 0;
}