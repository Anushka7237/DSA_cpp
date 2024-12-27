//wap to find total no. of vowels in a string.
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string str1;
    int i,vowel=0;
    cout<<"enter string"<<endl;
    getline(cin,str1);
    for(i=0;i<str1.length();i++)
    {
        if(str1[i]=='a'||str1[i]=='o'||str1[i]=='i'||str1[i]=='u'||str1[i]=='e'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
        vowel++;
    }
    cout<<"no. of vowels occured in string "<<vowel<<endl;
    return 0;
}