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
    // ~list()
    // {
    //     if (head != NULL)
    //     {
    //         delete head;
    //         head = NULL;
    //     }
    // }
    void push_front(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
            head = tail = newnode;
        newnode->next = head;
        head = newnode;
    }
    void push_back(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
            head = tail = newnode;
        tail->next = newnode;
        tail = newnode;
    }
    void pop_front()
    {
        node *temp = head;
        if (head == NULL)
        {
            /* code */
            cout << "ll is empty" << endl;
        }
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back()
    {
        node *temp = head;
        if (head == NULL)
        {
            /* code */
            cout << "ll is empty" << endl;
        }
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
};

node *printlist(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

node *splitmid(node *head) // spliting of linked list
{
    node *slow = head;
    node *fast = head;
    node *prev = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = NULL;
    return slow;
}
node *merge(node *left, node *right)
{
    list ans;
    node *i = left;
    node *j = right;

    while (i != NULL && j != NULL)
    {
        if (i->data <= j->data)
        {
            ans.push_back(i->data);
            i = i->next;
        }
        else
        {
            ans.push_back(j->data);
            j = j->next;
        }
    }
    while (i != NULL)
    {
        ans.push_back(i->data);
        i = i->next;
    }

    while (j != NULL)
    {
        ans.push_back(j->data);
        j = j->next;
    }
    return ans.head;
}

node *mergesort(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *righthead = splitmid(head);
    node *left = mergesort(head);
    node *right = mergesort(righthead);
    return merge(left, right);
}
int main()
{
    list ll;
    ll.push_back(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_front(5);
    printlist(ll.head);
    cout << endl;
    ll.head = mergesort(ll.head);
    printlist(ll.head);
    return 0;
}