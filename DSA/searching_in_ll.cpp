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
    int search(int val)
    {
        if(head==NULL)
        {
            cout<<"ll is empty and searching can't perform"<<endl;
            return -1;
        }
        node* temp= head;
        int idx=0;
        while(temp!=NULL)
        {
            if(temp->data==val){
            cout<<"data found at "<<idx<<endl;
            return 0;
            }
            temp=temp->next;
            idx++;
        }
        cout<<"data not found"<<endl;

    }
    int helper(node*temp,int key)
    {
        if(temp==NULL)
        return -1;
        if(temp->data==key)
        return 0;
        int idx=helper(temp->next,key);
        if(idx==-1)return -1;
        return idx+1;
    }
    int searchrec(int key)
    {
        int index=helper(head,key);
        if(index!=-1)
        cout<<"data found at "<<index<<endl;
        else
        cout<<"data not found"<<endl;
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
    lst.search(75);
    lst.searchrec(75);
    return 0;
}