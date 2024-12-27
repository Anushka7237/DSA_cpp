#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "enter string " << endl;
    getline(cin, str);
    for (int i = 0, j = 0; i <= str.length(); i++)
    {
        if (str[i] % 2 != 0 && str[i + 1] % 2 != 0)
        {
            for (j = str.length() + 1; j > i + 1; j--)
            {
                str.length()++;
                str[j + 1] = str[j];
                swap(str[j], str[j--]);
            }
            str[i + 1] = '-';
        }
    }
    cout << "string after operation " << str << endl;
    return 0;
}