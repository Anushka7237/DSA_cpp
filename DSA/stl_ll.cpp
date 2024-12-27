#include<iostream>
#include<list>  
#include<iterator>
using namespace std;
void printlist(list<int>ll)
{
    list<int>::iterator itr;
    for(itr=ll.begin();itr!=ll.end();itr++)
    cout<<(*itr)<<"->";
    cout<<"NULL"<<endl;
}
int main()
{
    list<int>ll;
    // methods of stl of ll in cpp
    ll.push_back(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    printlist(ll);
    ll.pop_back();
    printlist(ll);
    ll.pop_front();
    printlist(ll);
    // size will return the no of nodes in ll
    cout<<ll.size()<<endl;
    // front(ll.begi()) and tail(ll.end()) method
    cout<<"head ="<<ll.front()<<endl;
    cout<<"tail ="<<ll.back()<<endl;
    //insertion at any position 
    list<int>::iterator it;
    it=ll.begin();
    advance(it,1);//move th iterator to that position
    ll.insert(it,25);
    printlist(ll);
    return 0;
}