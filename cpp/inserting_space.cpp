#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1;
    string str2;
    cout<<"enter string without space "<<endl;
    getline(cin,str1);
    for(int i=0;i<str1.length()-1;i++)
    {
        str2+=str1[i];
        if(isupper(str1[i+1]))
        {
            str2+=' ';
        }
    }
    str2+=str1.back();
    cout<<str2<<endl;
    return 0;
}