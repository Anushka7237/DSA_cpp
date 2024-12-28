#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string s = "Help others";
    vector<int> vec;
    int i = 0;
    string str;
    while (i <= s.length())
    {
        if (s[i] == ' ')
            vec.push_back(i);
        i++;
    }
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        if (s[left] == ' ')
        {
            left++;
        }
        else if (s[right] == ' ')
        {
            right--;
        }
        else{
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
    cout << s;
    return 0;
}