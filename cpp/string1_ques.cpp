#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i;
    char word[30];
    cout<<"enter string"<<endl;
    cin>>word;
    int n=strlen(word);
    for(i=0;i<n;i++)
    {
       if( word[i]>='a'&&word[i]<='z')
       {
        if(word[i]=='a'|| word[i]=='e'||word[i]=='u'||word[i]=='o'||word[i]=='i')
        cout<<word[i]<<" ";
       }
    }
    return 0;
}