#include <iostream>
using namespace std;
class queue
{
    int *arr;
    int capacity;
    int currsize;
    int f, r;
public:
    queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        currsize = 0;
        f = 0;
        r = -1;
    }
    void enqueue(int data)
    {
        if (currsize == capacity)
        {
            cout << "queue is full" << endl;
            return;
        }
        r = (r + 1) % capacity;
        arr[r] = data;
        currsize++;
    }
    void dequeue()
    {
        if (currsize == 0)
        {
            cout << "queue is empty" << endl;
            return;
        }
        f = (f + 1) % capacity;
        currsize--;
    }
    int front()
    {
        return arr[f];
    }
    bool empty()
    {
        return currsize == 0;
    }
};
int main()
{
    queue q(4);
    q.dequeue();
    q.enqueue(19);
    q.enqueue(29);
    q.enqueue(39);
    q.enqueue(49);
    cout << q.front() << endl;
   q.dequeue();
   q.enqueue(59);
    cout << q.front() << endl;
    cout << q.empty() << endl;
    return 0;
}