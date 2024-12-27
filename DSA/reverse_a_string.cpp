#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<char>s;
    string str="anushka";
    string str1=" ";
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }
    while(!s.empty())
    {
        str1+=s.top();
        s.pop();
    }
    cout<<str1<<endl;
    return 0;
}
