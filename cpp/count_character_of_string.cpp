#include<iostream>
using namespace std;
int main()
{
    string str;
    int i,other=0,space=0,digit=0,character=0;
    cout<<"enter string"<<endl;
    getline(cin,str);
    for(i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        space++;
        else if((str[i]>='a'&& str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
        character++;
        else if(str[i]>='1' && str[i]<='9')
        digit++;
        else
        other++;
    }
    cout<<"total no. of spaces in string = "<<space<<endl;
    cout<<"total no. of character or letters in string = "<<character<<endl;
    cout<<"total no. of digit in string = "<<digit<<endl;
    cout<<"total other character in string = "<<other<<endl;
    return 0;
}