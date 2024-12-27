#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data1){
        data=data1;
        next=NULL;
    }
};
class queue{
    node*head;
    node*tail;
    public:
    queue()
    {
        head=tail=NULL;
    }
    void enqueue(int data1)
    {
        node*newnode=new node(data1);
        if(head==NULL)
        head=tail=newnode;
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void dequeue()
    {
        if(head==NULL)
        {
            cout<<"queue is empty"<<endl;
            return;
        }
        node*temp=head;
        head=head->next;
        delete temp;
    }
    int front()
    {
        if(head==NULL)
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return head->data;
    }
    bool empty()
    {
        return head==NULL;
    }
};
int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(56);
    q.enqueue(89);
    q.enqueue(895);
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.dequeue();
    }
    q.dequeue();
    return 0;
}
