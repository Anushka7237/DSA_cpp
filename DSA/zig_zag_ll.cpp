#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
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
    public:
    node*head;
    node*tail;
    list(){
        head=NULL;
        tail=NULL;
    }
    // ~list()
    // {
    //     if(head!=NULL)
    //     {
    //         delete head;
    //         head=NULL;
    //     }
    // }
    void push_front(int val)
    {
        node*newnode=new node(val);
        if(head==NULL)
        head=tail=newnode;
        newnode->next=head;
        head=newnode;
    }
    void push_back(int val)
    {
        node*newnode=new node(val);
        if(head==NULL)
        head=tail=newnode;
        tail->next=newnode;
        tail=newnode;
    }
    void pop_front()
    {
        node*temp=head;
        if (head==NULL)
        {
            /* code */
            cout<<"ll is empty"<<endl;
        }
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    void pop_back()
    {
        node*temp=head;
        if (head==NULL)
        {
            /* code */
            cout<<"ll is empty"<<endl;
        }
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void printlist()
    {
        node*temp=head;
        while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
        }
        cout<<"NULL";
    }
};

node* splitmid(node*head)//spliting of linked list
{
    node*slow=head;
    node*fast=head;
    node*prev=NULL;
    while(fast->next!=NULL&&fast!=NULL)
    {
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=NULL;
    return slow;
}
node*reverse(node*head)
{
    node*curr=head;
    node*prev=NULL;
    node*next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
node*merging(node*left,node*right)
{
    list ans;
    node*i=left;
    node*j=right;
    while(i!=NULL&&j!=NULL)
    {
        ans.push_back(i->data);
        ans.push_back(j->data);
        i=i->next;
        j=j->next;
    }
    while(i!=NULL)
    {
        ans.push_back(i->data);
        i=i->next;
    }
    while(j!=NULL)
    {
        ans.push_back(j->data);
        j=j->next;
    }
    return ans.head;
}
node* zigzagll(node*head){
    node*righthead=splitmid(head);
    node*rightheadrev=reverse(righthead);
    return merging(head,rightheadrev);
}
int main()
{
    list ll;
    ll.push_back(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.printlist();
    cout<<endl;
    ll.head=zigzagll(ll.head);
    ll.printlist();
    return 0;
}
