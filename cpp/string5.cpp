// Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
#include<iostream>
using namespace std;
void string_sort(string str)
{
    int i,j;
    for(i=1;i<=str.length()-1;i++)
    {
        for(j=0;j<=str.length()-i-1;j++)
        {
            if(str[j]>str[j+1])
            swap(str[j],str[j+1]);
        }
    }
  cout<<"sorted string = "<<str<<endl;
}
int main()
{
    string str;
    cout<<"enter string"<<endl;
    getline(cin,str);
    string_sort(str);
    return 0;
}