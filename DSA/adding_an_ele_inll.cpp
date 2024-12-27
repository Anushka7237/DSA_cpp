#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    public:
    node(int val){
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
    node*head;
    node*tail;
    public:
    list(){
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
 void pop_front()
 {
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
 }
 void insert(int val,int pos)
 {
    node* newnode=new node(val);
    node* temp=head;
    for(int i=0;i<pos-1;i++)
    {
        if(temp==NULL){
        cout<<"invalid position"<<endl;
        return ;
    }   
    }
    newnode->next=temp->next;
    temp->next=newnode;
 }
 void pop_back()
 {
    if(head==NULL)
    {
        cout<<"ll is empty"<<endl;
        return;
    }
    node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
 }
 void printlist()
 {
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
 }
};
int main()
{
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(485);
    ll.printlist();
    return 0;
}