#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,y;
    char word[]="APple";
    y=strlen(word);
    for(i=0;i<y;i++)
    {
        char ch=word[i];
        if(ch>='a'&& ch<='z')
            continue;
        else
        {
            word[i]=ch-'A'+'a';
        }
    }
    cout<<word<<endl;
    return 0;
}