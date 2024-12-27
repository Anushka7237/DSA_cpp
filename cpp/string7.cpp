//Write a C++ program to change the case (lower to upper and upper to lower cases) of each character in a given string.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter string"<<endl;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]=toupper(str[i]);
        else if(str[i]>='A' && str[i]<='Z')
        str[i]=tolower(str[i]);
        else
        continue;
    }
    cout<<"change the case of string = "<<str<<endl;
    return 0;
}