//check valid palindrome string 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter string"<<endl;
    getline(cin,str);
    string word=str;
    int start=0;
    int end=str.length()-1;
    while(start<=end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }
    if(word==str)
    cout<<"valid palindrome"<<endl;
    else
    cout<<"invalid palindrome"<<endl;
    return 0;
}
    