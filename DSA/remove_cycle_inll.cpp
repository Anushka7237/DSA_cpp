#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

public:
    node(int val)
    {
        data = val;
        next = NULL;
    }
    ~node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
class list
{
public:
    node *head;
    node *tail;

    list()
    {
        head = NULL;
        tail = NULL;
    }
    ~list()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
    void push_front(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
            head = tail = newnode;
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void pop_front()
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void printll()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};
bool iscycle(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "cycle exits" << endl;
            return true;
        }
    }
    cout << "cycle doesn't exist" << endl;
    return false;
}
void removecycle(node *head)
{
    if (!iscycle(head))
        return;
    node *slow = head;
    node *fast = head;
    if (slow == fast)
    {
        while (fast->next!= slow)
        {
            fast = fast->next;
        }
        fast->next = NULL;
    }
    else
    {
        node *prev = fast;
        while (slow != fast)
        {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL;
    }
}

int main()
{
    list ll;
    ll.push_front(12);
    ll.push_front(14);
    ll.push_front(13);
    ll.push_front(77);
    ll.tail->next = ll.head;
    removecycle(ll.head);
    ll.printll();
}