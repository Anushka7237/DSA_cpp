#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i,flag=0;
    getline(cin, str);
    cout<<str<<endl;
    for(i=0;i<str.length();i++)
    {
        cout<<str[i]<<"--";
    }
    cout<<endl;
    for(char ch:str)
    {
        cout<<ch<<"--";
    }
    cout<<endl;
    //sub strings of string
    int n=str.length();
    for(i=0;i<n;i++)
    {
        cout<<str.substr(i,n)<<endl;
    }
    for(i=0;i<str.length();i++)
    {
        str[i]=tolower(str[i]);
    }
    string word;
    cout<<"enter word string"<<endl;
    getline(cin,word);
    for(i=0;i<word.length();i++)
    {
    if(str.find(word[i])!=-1)
    flag++;
    }
    if(flag>=26)
    cout<<"pangram";
    else
    cout<<"not pangram";
    return 0;
}