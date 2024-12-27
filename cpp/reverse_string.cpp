#include<iostream>
using namespace std;
int main()
{
    int start=0;
    string str;
    cout<<"enter string"<<endl;
    getline(cin,str);
    int end=str.length();
    while(start<=end)
    {
        swap(str[start],str[end-1]);
        start++;
        end--;
    }
    cout<<"reverse string = "<<str<<endl;
    return 0;
}