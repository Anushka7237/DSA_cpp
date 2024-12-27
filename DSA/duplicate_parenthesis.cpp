#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool validornot(string s)
{
    stack<char>ch;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=')')
        ch.push(s[i]);
        else
        {
            if(ch.top()=='(')
            return true;
           while(ch.top()!='('){
           ch.pop();}
           ch.pop();
        }
    }
    return false;
}
int main()
{
    string s="((a+b))";
   cout<<(validornot(s)?"true":"false")<<endl;
   return 0;
}