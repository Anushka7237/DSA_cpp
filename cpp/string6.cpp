// Write a C++ program to count all the words in a given string.
#include<iostream>
using namespace std;
int main()
{
    string str;
    int flag=0;
    cout<<"enter string"<<endl;
    getline(cin,str);
    for(int i=0;i<str.length()-1;i++)
    {
        if(str[i]==' ')
        flag++;
    }
    cout<<"total no. of words in a string is "<<flag+1<<endl;
    return 0;
}