//  Write a C++ program to change every letter in a given string with the letter 
//  following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
#include<iostream>
using namespace std;
int main()
{
    int i;
    string str;
    cout<<"enter string"<<endl;
    string word="abcdefghijklmnopqrstuvwxyz";
    getline(cin,str);
    for(i=0;i<str.length();i++)
    {
        int d=str[i]-'a';
        str[i]=word[d+1];
    }
    cout<<str<<endl;
    return 0;
}