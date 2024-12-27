// Write a C++ program to capitalize the first letter of 
// each word in a given string. Words must be separated by only one space.
#include<iostream>
using namespace std;
int main()
{
    int i;
    string str;
    cout<<"enter string"<<endl;
    getline(cin,str);
    for(i=0;i<str.length();i++)
    {
        str[0]=toupper(str[0]);
        if(str[i]==' ')
        str[i+1]=toupper(str[i+1]);
    }
    cout<<str<<endl;
    return 0;
}