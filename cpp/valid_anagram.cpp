#include<iostream>
#include<string>
using namespace std;
int anagram(string str1,string str2)
{
    if(str1.length()!=str2.length())
    {
    cout<<"invalid anagram"<<endl;
    return 0;
    }
    int count[26],i,index;
    for(i=0;i<str1.length();i++)
    {
        index=str1[i]-'a';
        count[index]++;
    }
    for(i=0;i<str2.length();i++)
    {
        index=str2[index]-'a';
        if(count[index]==0)
        {
        cout<<"invalid anagram"<<endl;
        return 0;
        }
        count[index]--;
    }
    cout<<"valid anagram"<<endl;
    return 1;
}
int main()
{
    string str1;
    string str2;
    cout<<"enter string 1"<<endl;
    getline(cin, str1);
    cout<<"enter string 2"<<endl;
    getline(cin,str2);
    anagram(str1,str2);
    return 0;
}
