#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
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
        node *current = head;
        while (current != NULL)
        {
            node *nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void push_front(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void push_back(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "List is Empty";
            return;
        }
        else
        {
            head = head->next;
        }
    }
};
void printll(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}
node *merge(node *left, node *right)
{
    list ll;
    node *i = left;
    node *j = right;
    while (i != NULL && j != NULL)
    {
        if (i->data <= j->data)
        {
            ll.push_back(i->data);
            i = i->next;
        }
        else
        {
            ll.push_back(j->data);
            j = j->next;
        }
    }
    while (i != NULL)
    {
        ll.push_back(i->data);
        i = i->next;
    }
    while (j != NULL)
    {
        ll.push_back(j->data);
        j = j->next;
    }

    return ll.head;
}
node *splitatmid(node *head)
{
    node *slow = head;
    node *fast = head;
    node *previous = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        previous = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (previous != NULL)
    {
        previous->next = NULL;
    }
    return slow;
}

node *merge_sort(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *righthead = splitatmid(head);
    node *left = merge_sort(head);
    node *right = merge_sort(righthead);
    return merge(left, right);
}
int main()
{
    list l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);
    l1.push_front(5);
    printll(l1.head);
    l1.head = merge_sort(l1.head);
    printll(l1.head);
}