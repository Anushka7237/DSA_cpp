#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,y;
    char word[]="ApPle";
    y=strlen(word);
    for(i=0;i<y;i++)
    {
        char ch=word[i];
        if(ch>='A'&& ch<='Z')
            continue;
        else
        {
            word[i]=ch-'a'+'A';
        }
    }
    cout<<word<<endl;
    return 0;
}