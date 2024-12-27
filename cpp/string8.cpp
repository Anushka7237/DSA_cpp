#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    char chr1,chr2;
    cout<<"enter string"<<endl;
    getline(cin,str);
    cout<<"enter characer1"<<endl;
    cin>>chr1;
    cout<<"enter character2"<<endl;
    cin>>chr2;
    int ctr1=0;
    int ctr2=0;
    for(int i=0;i<=str.length();i++)
    {
        if(chr1==str[i])
        ctr1++;
        if(chr2==str[i])
        ctr2++;
    }
    if(ctr1==ctr2)
    cout<<"true"<<endl;
    else
    cout<<"false"<<endl;
    return 0;
}