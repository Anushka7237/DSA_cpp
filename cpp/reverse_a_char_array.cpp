#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char word[30];
    cout<<"enter string"<<endl;
    cin>>word;
    int start=0;
    int end=strlen(word)-1;
    while(start<=end)
    {
        swap(word[start],word[end]);
        start++;
        end--;
    }
    cout<<word;
    return 0;
}