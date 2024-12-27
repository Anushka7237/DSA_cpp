#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool validornot(string s)
{
    stack<char> ch;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            ch.push(s[i]);
        else
        {
            if (ch.empty())
                return false;
            char top = ch.top();
            if (top == '(' && s[i] == ')' || top == '[' && s[i] == ']' || top == '{' && s[i] == '}')
                ch.pop();
            else
                return false;
        }
    }
    return ch.empty();
}
int main()
{
    string s = "({{}})";
    cout << (validornot(s) ? "true" : "false") << endl;
    return 0;
}