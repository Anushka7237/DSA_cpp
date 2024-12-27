// Write a C++ program to find the largest word in a given string.
#include <iostream>
#include <string>
#include <limits.h>
using namespace std;
int main()
{
    int max_value = 0;
    int i, flag = 0;
    string str;
    string curr_word, max_word;
    cout << "enter string " << endl;
    getline(cin, str);
    for (i = 0; i <= str.length(); i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (flag > max_value)
            {
                max_value = flag;
                max_word = curr_word;
            }
            flag = 0;
            curr_word.clear();
        }
        else
        {
            curr_word += str[i];
            flag++;
        }
    }
    cout << max_value << " " << max_word << endl;
    return 0;
}