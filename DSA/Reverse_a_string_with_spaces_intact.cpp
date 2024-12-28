#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
    string s="Help others";
    vector<int>vec;
            int i=0;
            string str;
            while(i<=s.length())
            {
                if(s[i]==' ')
                vec.push_back(i);
                i++;
            }
            for(int j=s.length();j>=0;j--)
            {
                if(s[i]!=' ')
                str+=s[j];
            }
            int j=0;
           while(j!=vec.size()){
               int n=vec.front();
                vec.erase(vec.begin());
                i=n;
                while(i!=str.length()){
                str[i+1]=str[i];
                i++;
                }
                j++;
            }
            cout<<str;
    return 0;
}